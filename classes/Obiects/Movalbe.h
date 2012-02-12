#ifndef MOVALBE_H
#define MOVALBE_H

#include <queue>
#include "Object.h"
#include "../Point.h"

using std::queue;

namespace Objects {
    /**
    * Base class for all units etc
    * @author Bartłomiej Kiełbasa <kontakt@bkielbasa.pl>
    */
    class Movalbe
    {
    public:
        /**
        * Move element from current position to destination
        */
        virtual void move(unsigned int x, unsigned int y) = 0;
        virtual void move(Point p) = 0;

    protected:
        Point Destination;

        /**
        * If the object is moving, this queue stores the points that you want to go
        */
        queue<Point> Path;
    };
}

#endif // MOVALBE_H
