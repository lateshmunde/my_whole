#pragma once
#include "mypoint.h"
#include "myshape.h"

class Polygon : public Shape
{
public:
    int no_Of_sides;
    Point p1;

    Polygon(Point p1, int no_of_sides);
    ~Polygon() {};
    double side_length() const;
    std ::vector<Point> getCoordinates() override;
};

