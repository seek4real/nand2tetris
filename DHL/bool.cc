// bool.cc

#include <iostream>
#include "bool.h"


BoolTest::BoolTest(int _x, int _y, int _z):x(_x), y(_y), z(_z)
{
    std::cout << "called BoolTest constructor" << std::endl;
}

BoolTest::~BoolTest()
{
    std::cout << "called BoolTest Destructor~" << std::endl;
}

void BoolTest::Print()
{
    std::cout << "called BoolTest x=" << x 
    << " y=" << y 
    << " z=" << z 
    << std::endl;
}
