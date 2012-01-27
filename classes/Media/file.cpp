#include "file.h"

Media::File::File(std::string filename)
{
    this->Filename = filename;
}

bool Media::File::isExists()
{
    return fileExists(this->Filename);
}

bool Media::File::fileExists(std::string  filename)
{
    std::fstream fin;
    fin.open(filename.c_str(), std::ios::in);

    if( fin.is_open() )
    {
        fin.close();
        return true;
    }

    fin.close();
    return false;
}

void Media::File::createEmptyFile(std::string filename)
{
    std::ofstream file;
    file.open(filename.c_str());
    file <<std::endl;
    file.close();
}
