#include <iostream>

void bin(int n)
{
    if (n >= 2)
        bin(n / 2);
    std::cout <<  n % 2;
}





void input()
{
    std::cout << "Enter a value: ";
    int n;
    std::cin >>n;

    if(n>0)
        bin(n);
    else
        input();
}


int main()
{
    input();
    std::cout << std::endl;
    return 0;
}