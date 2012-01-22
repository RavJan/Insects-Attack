#ifndef POINT_H
#define POINT_H

class Point
{
public:
    Point();
    Point(unsigned int x, unsigned int y);

    unsigned int getX();
    unsigned int getY();

    void setX(unsigned int x);
    void setY(unsigned int y);

protected:
    unsigned int X;
    unsigned int Y;
};

#endif // POINT_H
