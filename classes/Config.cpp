#include "Config.h"

Config::Config(std::string filename):
    File(filename)
{
}

void Config::readConfig()
{
    std::fstream config;
    config.open(this->Filename.c_str(), std::fstream::in);
    std::string line;

    if(!config.is_open()) {
        throw "Configuration file not found";
    }

    while(!config.eof())
    {
        getline(config,line);

        std::string key;
        unsigned int i;

        for(i = 0; i < line.length(); ++i){
            if (line.at(i) != ' ') {
                key += line.at(i);
            } else {
                break;
            }
        }

        if (i < line.length()) {
            this->set(key, line.substr(i + 1));
        }
    }
}

std::string Config::get(std::string key)
{
    return Configuration[key];
}

void Config::set(std::string key, std::string value)
{
    Configuration[key] = value;
}

bool Config::ifKeyExists(std::string key)
{
    return Configuration.count(key.c_str()) > 0 ? true : false;
}

bool Config::save()
{
    std::fstream config;
    config.open(this->Filename.c_str());

    if (!config.is_open()) {
        return false;
    }

    std::map<std::string, std::string>::const_iterator itr;

    for(itr = this->Configuration.begin(); itr != this->Configuration.end(); ++itr){
        config<<itr->first<<" " << itr->second<<std::endl;
    }

    return true;
}
