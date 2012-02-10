#ifndef OBJECT_H
#define OBJECT_H

#include <SDL/SDL.h>
#include "../Point.h"
#include "../resourcemanager.h"

#include <string>
#include <map>

namespace Objects {

    /**
      * Base class for all objects seen on the screen
      * @author Bartłomiej Kiełbasa <kontakt@bkielbasa.pl>
      */
    class Object
    {
    public:
        unsigned int getX();
        unsigned int getY();
        unsigned int getWidth();
        unsigned int getHeight();
        /**
          * Returns name of the object. It may be used for displaying it on the screen
          * @return name of the object
          */
        std::string getName();

        /**
          * Virtual method for printing object on the screen
          */
        virtual void print(SDL_Surface *screen) = 0;
    protected:
        void setX(unsigned int x);
        void setY(unsigned int y);
        void setPosition(unsigned int x, unsigned int y);
        void setPosition(Point p);

        /**
          * Sets new width. Must be greater than 0
          * @param width new width of the object
          */
        void setWidth(unsigned int width);

        /**
          * Sets new height. Must be greater than 0
          * @param height new width of the object
          */
        void setHeight(unsigned int height);

        /**
          * Virtual method for loading textures
          */
        virtual void loadTextures() = 0;

        /**
          * All textures of the object
          */
        std::map<std::string, SDL_Surface *> Textures;

        /**
          * Position of the object on the screen
          */
        Point Position;

        /**
          * Width of the object
          */
        unsigned int Width;

        /**
          * Height of the object
          */
        unsigned int Height;

        /**
          * Name of the object eg Big spider or Queen of ants
          */
        std::string Name;

        /**
          * Resources manager
          */
        static ResourceManager ResManager;
    };
}

#endif // OBJECT_H
