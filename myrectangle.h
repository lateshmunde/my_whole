#pragma once
#include "mypoint.h"
#include "myshape.h"

class Rectangle : public Shape
{
public:
    Point p1;
    Point p2;
    Point p3;
    Point p4;

public:
    Rectangle(const Point a, const Point b, const Point c, const Point d);
    virtual ~Rectangle() {}

    double width() const;
    double height() const;
    std ::vector<Point> getCoordinates() override;
};