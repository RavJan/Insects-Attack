#ifndef FILE_H
#define FILE_H

#include <string>
#include <fstream>
#include <iostream>
#include <vector>

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
//<<<<<<< HEAD

        /**
          * Read file from a disk
          * @return bool value, true if fatch file to data vector
          */
        char*read();

        /**
          * Write file on a disk
          * @param pointer ot type *char pointed data which should be saved on a disk
          * @return bool true if wrote correctly or return false if any error occure
          */
        bool write(std::string filename, char* data, int length);

//=======
//>>>>>>> e4ccf556a82676069523f48450787f787df3342a
    protected:
        /// name of the file
        std::string Filename;
    };
}

#endif // FILE_H
