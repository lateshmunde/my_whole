#include "myPolygon.h"
#include "myline.h"
#include <cmath>
#include <vector>

Polygon ::Polygon(Point p1, int no_of_sides)
    : Shape("Polygon"), p1(p1), no_Of_sides(no_of_sides) {}

double Polygon ::side_length() const
{
}