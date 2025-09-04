#include "mypoint.h"
#include <cmath>

Point ::Point(const double x, const double y) : x(x), y(y) {}
Point ::~Point() {}

double Point ::getX() const { return x; }
double Point ::getY() const { return y; }
