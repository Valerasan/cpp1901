#include <iostream>

int main()
{
    int a = 5;
    int d = ++a;

    std::cout << a << " " << d << std::endl;


    int x = 5;
    int y = x++;

    std::cout << x << " " << y << std::endl;

    int m  = 5 , n = 5;

    std::cout << m << " " << n << std::endl;
    std::cout << ++m << " " << --n << std::endl;
    std::cout << m << " " << n << std::endl;
    std::cout << m++ << " " << n-- << std::endl;
    std::cout << m << " " << n << std::endl;



    return 0;
}