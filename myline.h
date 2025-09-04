#pragma once
#include <cmath>
#include "myshape.h"
#include "mypoint.h"

class Line : public Shape
{
public:
    Point p1;
    Point p2;

public:
    Line(Point a, Point b);
    virtual ~Line();

    double length() const;
    Point midpoint() const;
    std::vector<Point> getCoordinates() override;
};