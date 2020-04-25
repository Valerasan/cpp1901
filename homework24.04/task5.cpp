#include <iostream>

void count(int number)
{

	if( number > 0)
	{
        std::cout << number % 10 << '\t' ;
         count(number / 10);
	}

}

int main()
{
    count(977306);
    std::cout << '\n';
    return 0;
}