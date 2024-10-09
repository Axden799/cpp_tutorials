//
//  add.cpp
//  cpp_tutorial
//
//  Created by Denis Dutka on 10/8/24.
//
#include "square.h"

int getSquareSides()
{
    return 4;
}

int getSquarePerimeter(int sideLength)
{
    return sideLength * getSquareSides();
}
