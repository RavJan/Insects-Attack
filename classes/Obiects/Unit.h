#ifndef UNIT_H
#define UNIT_H

#include "Upgradable.h"
#include "Movable.h"

namespace Objects {

    /**
      * All units seen on the screen
      * @author Bartłomiej Kiełbasa <kontakt@bkielbasa.pl>
      */

    class Unit: public Upgradable, public Movable
    {
    public:
        Unit();
    };

}

#endif // UNIT_H
