#include "myline.h"
#include <cmath>
#include <vector>

Line ::Line(const Point a, const Point b) : Shape("Line"), p1(a), p2(b) {}
Line::~Line() {};
double Line ::length() const
{
    double dx = p2.getX() - p1.getY();
    double dy = p2.getY() - p1.getY();
    double length = sqrt(dx * dx + dy * dy);
    return length;
}

Point Line ::midpoint() const
{
    double mx = (p1.getX() + p2.getX()) / 2;
    double my = (p1.getY() + p2.getY()) / 2;
    return Point(mx, my);
}

std ::vector<Point> Line::getCoordinates()
{
    std::vector<Point> coord;
    coord.push_back(p1);
    coord.push_back(p2);
    return coord;
}