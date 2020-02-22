#include <iostream>
#include "lines.hpp"

int speed(const int TIME)
{
    int average = lines()/TIME;
    std::cout<<"Скорость      ="<<average<<std::endl;
    return average;
}