#include <iostream>

// void count(int number)
// {

// // 	if( number > 0)
// // 	{
// //         std::cout << number % 10 << '\t' ;
// //          count(number / 10);
// // 	}
// }


int count(int n)
{
    if (n < 10)
        return n;
    else
        return n%10 + count(n/10);


}

int main()
{
    count(977306);
    std::cout << '\n';
    return 0;
}