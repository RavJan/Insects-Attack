#ifndef OBJECT_H
#define OBJECT_H

#include <SDL/SDL.h>

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

        void setX(unsigned int x);
        void setY(unsigned int y);
        void setWidth(unsigned int width);
        void setHeight(unsigned int height);

        /**
          * Virtual method for printing object on the screen
          */
        virtual void print(SDL_Surface *screen);
    protected:
        /**
          * Position of the object on the screen
          */
        unsigned int X;

        /**
          * Position of the object on the screen
          */
        unsigned int Y;

        /**
          * Width of the object on the screen
          */
        unsigned int Width;

        /**
          * Height of the object on the screen
          */
        unsigned int Height;
    };
}

#endif // OBJECT_H
