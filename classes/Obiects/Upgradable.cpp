#include "Upgradable.h"

unsigned int Objects::Upgradable::getLevel()
{
    return this->Level;
}

void Objects::Upgradable::setLevel(unsigned int level)
{
    if (level <= this->getMaxLevel()) {
        this->Level = level;
    }
}
