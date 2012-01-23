#ifndef BUILDING_H
#define BUILDING_H

#include "Destroyable.h"
#include "Static.h"

namespace Objects {

    /**
      * Base class for all buildings
      * @author Bartłomiej Kiełbasa <kontakt@bkielbasa.pl>
      */
    class Building: public Destroyable, public Static
    {
    public:
    };

}

#endif // BUILDING_H
