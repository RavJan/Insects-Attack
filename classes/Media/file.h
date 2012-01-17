#ifndef FILE_H
#define FILE_H

#include <string>
#include <fstream>

namespace Media {
    class File
    {
    public:
        /**
         * Default constructor
         * @param string filename name of file to load
         */
        File(std::string filename);

        /**
         * Chceck if file exists
         * @return bool true if file exists, otherwise returns false
         */
        bool isExists();

    protected:
        std::string Filename;
    };
}

#endif // FILE_H
