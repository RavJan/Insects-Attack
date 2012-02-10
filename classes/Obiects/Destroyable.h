#ifndef DESTROYABLE_H
#define DESTROYABLE_H

namespace Objects {

    /**
      * All destroyable objects on the map
      * @author Bartłomiej Kiełbasa <kontakt@bkielbasa.pl>
      */
    class Destroyable
    {
    public:
        unsigned int getMaxLife();
        unsigned int getLife();
    protected:
        void setMaxLife(unsigned int life);
        void setLife(unsigned int life);
        unsigned int MaxLife;
        unsigned int Life;
    };

}

#endif // DESTROYABLE_H
