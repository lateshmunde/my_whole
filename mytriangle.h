#pragma once
#include "myshape.h"
#include "mypoint.h"
class Triangle : public Shape
{
public:
    Point p1;
    Point p2;
    Point p3;

public:
    Triangle(Point a, Point b, Point c);
    virtual ~Triangle() {}

    double lengthOfSide(const Point a, const Point b) const;
    std ::vector<Point> getCoordinates() override;
};
