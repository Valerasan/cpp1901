#pragma once
#include <iostream>

long int random(int min, int max)
{
//     srand(time(0));
    return min + rand() % (max - min);
}
