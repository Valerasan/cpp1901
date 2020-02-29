#include <iostream>

int summ(int number1 , int number2)
{
    std::cout<<"Summ"<<std::endl;
    return number1 + number2;
}

int subtraction(int number1 , int number2)
{
    std::cout<<"Subtraction"<<std::endl;
    return number2 - number1;
}

int multiplication(int number1 , int number2)
{
    std::cout<<"Multiplication"<<std::endl;
    return number1 * number2;
}

float division(float number1 , float number2)
{
    std::cout<<"Division"<<std::endl;
    return number2 / number1;
}