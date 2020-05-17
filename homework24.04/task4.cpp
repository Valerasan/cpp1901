#include <iostream>


int count(int number)
{
    if (number < 10)св
		return number;
	else
		return count(number / 10) + number % 10;
}

int main()
{
    std::cout <<"Summ: "<<count(97736) << std::endl;

    return 0;
}