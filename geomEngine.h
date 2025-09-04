#include <iostream>
#include <vector>
#include "myshape.h"
#include "mypoint.h"
#include "myline.h"
#include "mytriangle.h"
#include "myrectangle.h"
#include "fileWriter.h"
#include <string>

class geomEngine
{
public:
    geomEngine();
    ~geomEngine();

    void getShape();
    void createLine(Point a, Point b);
    void createTriangle(Point a, Point b, Point c);
    void createRectangle(Point a, Point b, Point c, Point d);
    void createCircle(Point center, int no_points, double radius);
};