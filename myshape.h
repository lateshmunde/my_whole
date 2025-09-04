#pragma once
#include <string>
#include <vector>
#include "mypoint.h"

class Shape
{
protected:
    std ::string name;

public:
    Shape(const std ::string &n);
    virtual ~Shape();

    std ::string getName() const;
    virtual std ::vector<Point> getCoordinates() = 0;
};