#include "file.h"

Media::File::File(std::string filename)
{
    this->Filename = filename;
}

bool Media::File::isExists()
{
    std::fstream fin;
    fin.open(this->Filename.c_str(),std::ios::in);

    if( fin.is_open() )
    {
        fin.close();
        return true;
    }

    fin.close();
    return false;
}

char* Media::File::read()
{
    std::fstream fin;
    char* data = null;
    int length = 0;

    if(this->Filename == "")
        return null;

    fin.open(this->Filename.c_str(), std::ios::in);

    fin.seekg(0, std::ios::end);
    length = fin.tellg();
    fin.seekg(0, std::ios::beg);

    data = new char[length];

    if(data == null)
        return null;

    fin.read(data, length);

    if(fin.bad() || fin.fail())
    {
        delete [] data;
        return null;
    }

    fin.close();

    return data;
}
