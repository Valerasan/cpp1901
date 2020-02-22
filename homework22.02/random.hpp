#pragma once
#include <iostream>

long int Random(int min, int max)
{
//     srand(time(0));
    return min + rand() % (max - min);
}
