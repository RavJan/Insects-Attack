#include "resourcemanager.h"

ResourceManager::ResourceManager()
{
}

SDL_Surface * ResourceManager::loadImage(std::string filename)
{
    if (this->imageLoaded(filename)) {
        return this->Images[filename.c_str()];
    }

    this->Images[filename.c_str()] = IMG_Load(filename.c_str());

    if (!this->Images[filename.c_str()]) {
        std::cout<<"File does not exists: "<<filename<<std::endl;
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
