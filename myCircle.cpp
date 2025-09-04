#include "myCircle.h"
#include "myline.h"
#include <cmath>
#include <iostream>

Circle::Circle(Point center, int no_points, double radius)
    : Shape("Circle"), p1(center), no_pts(no_points), radius(radius) {}

std ::vector<Point> Circle::getCoordinates()
{
    std::vector<Point> points;
    for (int i = 0; i < no_pts; ++i)
    {
        double angle = 2 * M_PI * i / no_pts;
        double x = p1.getX() + radius * cos(angle);
        double y = p1.getY() + radius * sin(angle);
        points.push_back(Point(x, y));
    }
    return points;
}