#pragma once
#include <iostream>
#include "randomNumber.hpp"

int counter()
{
    return Random(15 , 20);

}

int line(int index)
{
    int line[counter()];
    // int summ = 0;
    for(int i =0 ; i < counter() ; i++)
    {
        line[i] = Random(31 , 39);
        // summ +=line[i];
    }
    // std::cout<<summ<<std::endl;
    return line[index];
}



