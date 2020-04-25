#include <iostream>


int factorial(int number)
{
    if (number < 0)
        return 0;
    else if (number == 1 )
        return 1;
    else
        return number * factorial(number - 1);



}

int main()
{
    int n = 0;
    std::cout << "Enter the number: ";
    std::cin >> n;
    std::cout << n << "!" << " = " << factorial(n) << '\n';
    return 0;
}