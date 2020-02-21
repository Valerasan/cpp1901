#pragma once
#include <iostream>

long int Random(int min, int max)
{
  return min + rand() % (max - min);
}