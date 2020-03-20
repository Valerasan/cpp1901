
#ifndef GET_INPUT_HPP
#define GET_INPUT_HPP

#include <string>

int get_int()
{
    int number  = 0;
    std::cout<<"Enter the number: ";
    std::cin>>number;

    return number;
}


float get_float()
{
    float number = 0;
    std::cout<<"Enter the float number: ";
    std::cin>>number;

    return number;
}


std::string get_string()
{
    std::string word = "";
    std::cout<<"Enter the word: ";
    std::cin>>word;

    return word;
}


#endif