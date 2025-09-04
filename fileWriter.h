#pragma once
#include <fstream>
#include "mypoint.h"
#include <vector>

class fileWriter
{
public:
    fileWriter();
    ~fileWriter();

    void write(std::vector<Point> points);
};