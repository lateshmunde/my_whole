#include "myPolygon.h"
#include "myline.h"
#include <cmath>
#include <vector>

Polygon ::Polygon(Point center, int no_of_sides, double radius)
    : Shape("Polygon"), p1(center), no_Of_sides(no_of_sides), radius(radius) {}

std ::vector<Point> Polygon::getCoordinates()
{
    std::vector<Point> points;
    for (int i = 0; i < no_Of_sides; ++i)
    {
        double angle = 2 * M_PI * i / no_Of_sides;
        double x = p1.getX() + radius * cos(angle);
        double y = p1.getY() + radius * sin(angle);
        points.push_back(Point(x, y));
    }
    return points;
}

double Polygon::side_length() const
{
    double side_length = 2 * radius * sin(M_PI / no_Of_sides);
    return side_length;
}