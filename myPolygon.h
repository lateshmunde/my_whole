#pragma once
#include "mypoint.h"
#include "myshape.h"

class Polygon : public Shape
{
public:
    int no_Of_sides; // no of sides are equal to no of points
    Point p1;
    double radius;

    Polygon(Point center, int no_of_sides, double radius);
    ~Polygon() {};
    double side_length() const;
    std ::vector<Point> getCoordinates() override;
};
