#ifndef FILE_H
#define FILE_H

#include <string>
#include <fstream>
#include <iostream>

namespace Media {
   /**
    * The base class for classes that operate on files
    * @author Bartłomiej Kiełbasa <kontakt@bkielbasa.pl>
    */
    class File
    {
    public:
        /**
         * Default constructor
         * @param filename name of file to load
         */
        File(std::string  filename);

        /**
         * Chceck if file exists
         * @return true if file exists, otherwise returns false
         */
        bool isExists();

<<<<<<< HEAD
=======
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

>>>>>>> 244e98942cf7db64c9d187e5d86c9b07d58c6203
    protected:
        /// name of the file
        std::string Filename;
    };
}

#endif // FILE_H
