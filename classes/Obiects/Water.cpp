#include "Water.h"

Objects::Water::Water(unsigned int x, unsigned int y)
{
    this->setPosition(x, y);
    this->setWidth(100);
    this->setHeight(100);
    this->loadTextures();
}

Objects::Water::Water(Point p)
{
    this->setPosition(p);
    this->setWidth(100);
    this->setHeight(100);
    this->loadTextures();
}

void Objects::Water::loadTextures()
{
    std::string water1 = "media/textures/objects/water/water1.png";

    this->Textures[water1] = this->ResManager.loadImage(water1);
}

void Objects::Water::print(SDL_Surface *screen)
{
    std::string water1 = "media/textures/objects/water/water1.png";

    SDL_Rect sourceRect;
    sourceRect.x = 0;
    sourceRect.y = 0;
    sourceRect.w = Width;
    sourceRect.h = Height;

    SDL_Rect destRect;
    destRect.x = this->Position.getX();
    destRect.y = this->Position.getY();
    destRect.w = Width;
    destRect.h = Height;

    SDL_BlitSurface(this->Textures[water1], &sourceRect, screen, &destRect);
}
