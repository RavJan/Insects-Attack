#ifndef FILE_H
#define FILE_H

#include <string>
#include <fstream>
#include <iostream>

namespace Media {
    class File
    {
    public:
        /**
         * Default constructor
         * @param string filename name of file to load
         */
        File(std::string  filename);

        /**
         * Chceck if file exists
         * @return bool true if file exists, otherwise returns false
         */
        bool isExists();

        /**
          * Read file from a disk
          * @return a pointer to a loaded  file into memory
          */
        char* read();

        /**
          * Write file on a disk
          * @param pointer ot type *char pointed data which should be saved on a disk
          * @return bool true if wrote correctly or return false if any error occure
          */
        bool write(std::string filename, char* data, int length);

    protected:
        std::string Filename;
    };
}

#endif // FILE_H
