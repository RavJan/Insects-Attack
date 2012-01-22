#include "file.h"

Media::File::File(std::string filename)
{
    this->Filename = filename;
}

bool Media::File::isExists()
{
    std::fstream fin;
    fin.open(this->Filename.c_str(), std::ios::in);

    if( fin.is_open() )
    {
        fin.close();
        return true;
    }

    fin.close();
    return false;
}
