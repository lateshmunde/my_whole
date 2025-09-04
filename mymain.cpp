#include <iostream>
#include <vector>
#include "myshape.h"
#include "mypoint.h"
#include "myline.h"
#include "mytriangle.h"
#include "myrectangle.h"
#include <string>
#include "fileWriter.h"
#include "geomEngine.h"

int main()
{
    geomEngine g;
    g.getShape();

    // To keep the console window open
    std::cin.get();
    std::cin.get();
    return 0;
}