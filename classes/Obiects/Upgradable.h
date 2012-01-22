#ifndef UPGRADABLE_H
#define UPGRADABLE_H

#include "Destroyable.h"

namespace Objects {

    /**
      * Objects that can be upgraded
      * @author Bartłomiej Kiełbasa <kontakt@bkielbasa.pl>
      */
    class Upgradable: public Destroyable
    {
    public:
        /**
          * Get current level
          * @return current level
          */
        unsigned int getLevel();
        virtual unsigned int getMaxLevel() = 0;

        /**
          * Start upgrading object
          * @return true if it can be upgraded
          */
        virtual bool startUpgrading() = 0;

    protected:
        /**
          * Set current level. May not be larger than getMaxLevel()
          * @see getMaxLevel
          * @param level current level
          */
        void setLevel(unsigned int level);

        unsigned int Level;
        unsigned int MaxLevel;
    };

}

#endif // UPGRADABLE_H
