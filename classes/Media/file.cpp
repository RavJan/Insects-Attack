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

char* Media::File::read()
{
    std::ifstream fin;
    char* data = NULL;
    int length = 0;

    if(this->Filename == "")
        return NULL;

    fin.open(this->Filename.c_str(), std::ios::in | std::ios::binary);

    if(!(fin.is_open()))
        return NULL;

    fin.seekg(0, std::ios::end);
    length = fin.tellg();
    fin.seekg(0, std::ios::beg);

    if(length <= 0)
    {
        fin.close();
        return NULL;
    }

    data = new char[length];

    if(data == NULL)
    {
        fin.close();
        return NULL;
    }

    fin.read(data, length);

    if(fin.bad() || fin.fail())
    {
        fin.close();
        delete [] data;
        return NULL;
    }

    fin.close();

    return data;
}

bool Media::File::write(std::string filename, char *data, int length)
{
    std::ofstream fout;
    if((filename == "") || (data == NULL) || (length <= 0))
        return false;

    fout.open(filename.c_str(), std::ios::out | std::ios::binary);

    if(!(fout.is_open()))
        return false;

    fout.write(data, length);

    fout.close();
    return true;
}

void Media::File::createEmptyFile(std::string filename)
{
    std::ofstream file;
    file.open(filename.c_str());
    file <<std::endl;
    file.close();
}
