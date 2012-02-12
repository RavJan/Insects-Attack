#ifndef CONFIG_H
#define CONFIG_H

#include "Media/file.h"

#include <fstream>
#include <map>

/**
  * Class used to manage configuration
  * @author Bartłomiej Kiełbasa <kontakt@bkielbasa.pl>
  */
class Config : public Media::File
{
public:

    Config(std::string filename);

    /**
      * Reads configuration file
      * @throws Exception when file does not exists
      */
    void readConfig();

    /**
      * Returns config's value of the key
      * @return std::string
      */
    std::string get(std::string key);

    /**
      * Sets config
      * @param key
      * @param value
      */
    void set(std::string key, std::string value);

    /**
      * Check if key in a configuration structur already exists
      * @param key
      * @return true if it does, otherwise return false
      */
    bool ifKeyExists(std::string key);

    /**
      * Saves configuration to file
      * @return true if saved correctly, otherwise returns false
      */
    bool save();

protected:
    /// Map with all configuration
    std::map<std::string, std::string> Configuration;
};

#endif // CONFIG_H
