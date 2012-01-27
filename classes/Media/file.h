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

        /**
         * Chceck if file exists
         * @return true if file exists, otherwise returns false
         */
        static bool fileExists(std::string  filename);

        /**
          * Creates empty file
          * @param filename
          */
        static void createEmptyFile(std::string  filename);
    protected:
        /// name of the file
        std::string Filename;
    };
}

#endif // FILE_H
