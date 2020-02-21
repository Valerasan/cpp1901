#pragma once
#include <iostream>
#include "counter.hpp"
int CONSTANTA()
{
    const int CONST = counter();
    return CONST;
}

int speed(int S_time)
{
    const int numberOfLines = CONSTANTA();
    float summ2 = 0;
    float speed[numberOfLines];
    for(int y = 0; y<counter(); y++)
    {
        speed[y]=line(y)/S_time;
        summ2 += speed[y];
    }
    return summ2/counter();
}

int lineLenght()
{
    const int numberOfLines = CONSTANTA();
    float summ3 = 0;
    for(int z = 0; z<numberOfLines; z++)
    {
        summ3 += line(z);
    }
    return summ3;
}
