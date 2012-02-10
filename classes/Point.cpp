#include "Point.h"

Point::Point()
{
    this->X = this->Y = 0;
}

Point::Point(unsigned int x, unsigned int y)
{
    this->X = x;
    this->Y = y;
}

unsigned int Point::getX()
{
    return X;
}

unsigned int Point::getY()
{
    return Y;
}

void Point::setX(unsigned int x)
{
    X = x;
}

void Point::setY(unsigned int y)
{
    Y = y;
}
