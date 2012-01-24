#ifndef WATHER_H
#define WATHER_H

#include <iostream>
#include "Static.h"
#include "../Point.h"

namespace Objects {

    class Water : public Static
    {
    public:
        Water(unsigned int x, unsigned int y);
        Water(Point p);
        void print(SDL_Surface *screen);
    protected:
        void loadTextures();
    };

}

#endif // WATHER_H
