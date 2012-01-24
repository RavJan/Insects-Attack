#include "Object.h"

unsigned int Objects::Object::getX()
{
    return this->Position.getX();
}

unsigned int Objects::Object::getY()
{
    return this->Position.getY();
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
    this->Position.setX(x);
}

void Objects::Object::setY(unsigned int y)
{
    this->Position.setY(y);
}

void Objects::Object::setPosition(unsigned int x, unsigned int y)
{
    this->setPosition(Point(x, y));
}

void Objects::Object::setPosition(Point p)
{
    this->Position = p;
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

std::string Objects::Object::getName()
{
    return this->Name;
}
