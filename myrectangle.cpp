#include "myrectangle.h"
#include "myline.h"
#include <cmath>
#include <vector>

Rectangle ::Rectangle(Point a, Point b, Point c, Point d)
    : Shape("Rectangle"), p1(a), p2(b), p3(c), p4(d) {}

double Rectangle ::width() const
{
    Line l(p1, p2);
    return l.length();
}

double Rectangle ::height() const
{
    Line l(p1, p4);
    return l.length();
}

std ::vector<Point> Rectangle::getCoordinates()
{
    std::vector<Point> coord;
    coord.push_back(p1);
    coord.push_back(p2);
    coord.push_back(p3);
    coord.push_back(p4);
    return coord;
}
