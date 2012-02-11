#include "resourcemanager.h"

SDL_Surface * ResourceManager::loadImage(std::string filename)
{
    if (this->imageLoaded(filename)) {
        return this->Images[filename.c_str()];
    }

    this->Images[filename.c_str()] =  IMG_Load(filename.c_str());

    if (!this->Images[filename.c_str()]) {
        Logger::log("File does not exists: ", TYPE_ERROR);
    }

    return this->Images[filename.c_str()];
}

bool ResourceManager::imageLoaded(std::string filename)
{
    if (this->Images.count(filename.c_str())) {
        return true;
    }

    return false;
}
