#pragma once
#include "myshape.h"
#include "mypoint.h"
#include <vector>

class Circle : public Shape
{
public:
    int no_pts;
    double radius;
    Point p1;
    // Point p2;

    Circle(Point center, int no_points, double radius);
    ~Circle() {};
    std ::vector<Point> getCoordinates() override;
};