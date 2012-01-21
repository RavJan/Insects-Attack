#ifndef RESOURCEMANAGER_H
#define RESOURCEMANAGER_H

#include<SDL/SDL.h>

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
    SDL_Surface * loadImage(char *filename);

    /**
      * Returns information if image was loaded
      * @return true if image has been already loaded correctly, otherwise returns false
      */
    bool imageLoaded(char *filename);
};

#endif // RESOURCEMANAGER_H
