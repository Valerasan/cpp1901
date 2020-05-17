#include "lines.hpp"
#include <iostream>

float speed(int TIME)
{

    int average = lines()/TIME;
    std::cout<<"Скорость      ="<<average<<std::endl;
    return average;
}
