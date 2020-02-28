#ifndef CALC_HPP
#define CALC_HPP
#include <iostream>
#include "getInputNumber.hpp"

int calc()
{
    int number1 = getInputNumber();
    int number2 = getInputNumber();
    std::cout<<number1<<"+"<<number2<<"="<<number1+number2<<std::endl;
    std::cout<<number1<<"-"<<number2<<"="<<number1-number2<<std::endl;
    std::cout<<number1<<"*"<<number2<<"="<<number1*number2<<std::endl;
    std::cout<<number1<<"/"<<number2<<"="<<float(number1/number2)<<std::endl;
    return 0;
}

#endif