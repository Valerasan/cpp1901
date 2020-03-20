#ifndef RANDOM_HPP
#define RANDOM_HPP
#include <cstdlib>
#include <ctime>

int random(int min, int max)
{
    // std::srand(std::time(0));
    return min + rand() % (max - min);
}

#endif