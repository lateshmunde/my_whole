#include "mytriangle.h"
#include <cmath>

Triangle ::Triangle(const Point a, const Point b, const Point c)
    : Shape("Triangle"), p1(a), p2(b), p3(c) {}

double Triangle ::lengthOfSide(const Point a, const Point b) const
{
    double abX = b.getX() - a.getX();
    double abY = b.getY() - a.getY();

    return sqrt(abX * abX + abY * abY);
}

std ::vector<Point> Triangle::getCoordinates()
{
    std::vector<Point> coord;
    coord.push_back(p1);
    coord.push_back(p2);
    coord.push_back(p3);
    return coord;
}