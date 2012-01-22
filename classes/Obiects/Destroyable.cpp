#include "Destroyable.h"

unsigned int Objects::Destroyable::getLife()
{
    return this->Life;
}

unsigned int Objects::Destroyable::getMaxLife()
{
    return this->MaxLife;
}

void Objects::Destroyable::setMaxLife(unsigned int life)
{
    this->MaxLife = life;
}

void Objects::Destroyable::setLife(unsigned int life)
{
    if (life > this->getMaxLife()) {
        life = this->getMaxLife();
    }

    this->MaxLife = life;
}
