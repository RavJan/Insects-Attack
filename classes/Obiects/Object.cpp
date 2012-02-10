#include "Object.h"

unsigned int Objects::Object::getX()
{
    return this->X;
}

unsigned int Objects::Object::getY()
{
    return this->Y;
}

unsigned int Objects::Object::getWidth()
{
    return this->Width;
}

unsigned int Objects::Object::getHeight()
{
    return this->Height;
}

void Objects::Object::setX(unsigned int x)
{
    if (x > 0) {
        this->X = x;
    }
}

void Objects::Object::setY(unsigned int y)
{
    if (y > 0) {
        this->Width = y;
    }
}

void Objects::Object::setHeight(unsigned int height)
{
    if (height > 0) {
        this->Height = height;
    }
}

void Objects::Object::setWidth(unsigned int width)
{
    if (width > 0) {
        this->Width = width;
    }
}
