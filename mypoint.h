#pragma once

class Point
{
public:
    double x;
    double y;

public:
    Point() {};
    Point(double a, double b);
    virtual ~Point();

    double getX() const;
    double getY() const;
};