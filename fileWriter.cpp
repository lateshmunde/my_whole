#include "fileWriter.h"
#include <iostream>

fileWriter::fileWriter() {}
fileWriter::~fileWriter() {}

void fileWriter ::write(std::vector<Point> points)
{
    std ::ofstream outfile;
    outfile.open("lat.dat");
    for (int i = 0; i < points.size(); i++)
    {
        outfile << points[i].x << " " << points[i].y << std::endl;
    }
    outfile.close();
}