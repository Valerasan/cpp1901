#include <iostream>


int num (int n, int i)
{
    return (n == 0) ? i : function ( n/10 , 1*10 + n%10)
}


int main()
{
    std::cout << num(123 , 0) <<std::endl;

    return 0;
}