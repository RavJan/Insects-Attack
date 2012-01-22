#ifndef RESOURCEMANAGER_H
#define RESOURCEMANAGER_H

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <map>
#include <string>

/**
  * Recourses manager
  * @author Bartłomiej Kiełbasa <kontakt@bkielbasa.pl>
  */
class ResourceManager
{
public:
    ResourceManager();

    /**
      * Loads image and returns pointer to it
      * @return pointer to loaded image
      */
    SDL_Surface * loadImage(std::string filename);

    /**
      * Returns information if image was loaded
      * @return true if image has been already loaded correctly, otherwise returns false
      */
    bool imageLoaded(std::string filename);

protected:
    /**
      * Map with all images loaded by ResourceManager
      * @see loadImage
      */
    std::map<std::string, SDL_Surface *> Images;
};

#endif // RESOURCEMANAGER_H
