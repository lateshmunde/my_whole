#include <iostream>
#include <vector>
#include "myshape.h"
#include "mypoint.h"
#include "myline.h"
#include "mytriangle.h"
#include "myrectangle.h"
#include "myCircle.h"
#include "myPolygon.h"
#include <string>
#include "fileWriter.h"
#include "geomEngine.h"
#include "myCircle.h"
#include <cmath>

geomEngine::geomEngine() {}
geomEngine::~geomEngine() {}

void geomEngine::createLine(Point p1, Point p2)
{
    Line line(p1, p2);
    std::vector<Point> coords = line.getCoordinates();
    fileWriter fline;
    fline.write(coords);

    std::cout << "Length of the line: " << line.length() << std::endl;
    Point mid = line.midpoint();
    std::cout << "Midpoint of the line: (" << mid.getX() << ", " << mid.getY() << ")" << std::endl;
}

void geomEngine::createTriangle(Point p1, Point p2, Point p3)
{
    Triangle triangle(p1, p2, p3);
    std::vector<Point> coords = triangle.getCoordinates();
    fileWriter ftriangle;
    ftriangle.write(coords);

    std::cout << "Length of side AB: " << triangle.lengthOfSide(p1, p2) << std::endl;
    std::cout << "Length of side BC: " << triangle.lengthOfSide(p2, p3) << std::endl;
    std::cout << "Length of side AC: " << triangle.lengthOfSide(p1, p3) << std::endl;
}

void geomEngine::createRectangle(Point p1, Point p2, Point p3, Point p4)
{
    Rectangle rectangle(p1, p2, p3, p4);
    std::vector<Point> coords = rectangle.getCoordinates();
    fileWriter frectangle;
    frectangle.write(coords);

    std::cout << "Width of the rectangle: " << rectangle.width() << std::endl;
    std::cout << "Height of the rectangle: " << rectangle.height() << std::endl;
}

void geomEngine::createCircle(Point center, int no_points, double radius)
{
    Circle circle(center, no_points, radius);
    std::vector<Point> coords = circle.getCoordinates();
    fileWriter fcircle;
    fcircle.write(coords);

    std::cout << "Radius of the circle: " << radius << std::endl;
}

void geomEngine::createPolygon(Point center, int no_Of_sides, double radius)
{
    Circle circle(center, no_Of_sides, radius);
    std::vector<Point> coords = circle.getCoordinates();
    fileWriter fpolygon;
    fpolygon.write(coords);

    std::cout << "Radius of the circle: " << radius << std::endl;
}

void geomEngine::getShape()
{
    std::cout << "Welcome to the Geometry Engine!" << std::endl;

    char shapeType;
    std::cout << "Enter shape type only intial (Line(L), Triangle(T), Rectangle(R), Circle(C), Polygon(P)): ";
    std::cin >> shapeType;

    if (shapeType == 'L')
    {
        double p1x, p1y, p2x, p2y;
        std::cout << "Enter coordinates for Point 1 (x y): ";
        std::cin >> p1x >> p1y;
        std::cout << "Enter coordinates for Point 2 (x y): ";
        std::cin >> p2x >> p2y;

        Point p1(p1x, p1y);
        Point p2(p2x, p2y);

        createLine(p1, p2);
    }
    else if (shapeType == 'T')
    {
        double p1x, p1y, p2x, p2y;
        std::cout << "Enter coordinates for Point 1 (x y): ";
        std::cin >> p1x >> p1y;
        std::cout << "Enter coordinates for Point 2 (x y): ";
        std::cin >> p2x >> p2y;

        Point p1(p1x, p1y);
        Point p2(p2x, p2y);

        double p3x, p3y;
        std::cout << "Enter coordinates for Point 3 (x y): ";
        std::cin >> p3x >> p3y;
        Point p3(p3x, p3y);

        createTriangle(p1, p2, p3);
    }
    else if (shapeType == 'R')
    {
        double p1x, p1y, p2x, p2y;
        std::cout << "Enter coordinates for Point 1 (x y): ";
        std::cin >> p1x >> p1y;
        std::cout << "Enter coordinates for Point 2 (x y): ";
        std::cin >> p2x >> p2y;

        Point p1(p1x, p1y);
        Point p2(p2x, p2y);

        double p3x, p3y;
        std::cout << "Enter coordinates for Point 3 (x y): ";
        std::cin >> p3x >> p3y;
        Point p3(p3x, p3y);
        double p4x, p4y;
        std::cout << "Enter coordinates for Point 4 (x y): ";
        std::cin >> p4x >> p4y;
        Point p4(p4x, p4y);

        createRectangle(p1, p2, p3, p4);
    }
    else if (shapeType == 'C')
    {
        double p1x, p1y;
        std::cout << "Enter coordinates for Center Point  (x y): ";
        std::cin >> p1x >> p1y;

        Point p1(p1x, p1y);

        int no_points;
        double radius;
        std::cout << "Enter number of points to approximate the circle: ";
        std::cin >> no_points;
        std::cout << "Enter radius of the circle: ";
        std::cin >> radius;

        createCircle(p1, no_points, radius);
    }
    else if (shapeType == 'P')
    {
        double p1x, p1y;
        std::cout << "Enter coordinates for Center Point  (x y): ";
        std::cin >> p1x >> p1y;

        Point p1(p1x, p1y);

        int no_of_sides;
        double radius;
        std::cout << "Enter number of sides of the polygon: ";
        std::cin >> no_of_sides;
        std::cout << "Enter radius of the polygon: ";
        std::cin >> radius;

        createPolygon(p1, no_of_sides, radius);
    }

    else
    {
        std::cout << "Invalid shape type!" << std::endl;
    }
}