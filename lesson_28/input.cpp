#include <iostream>
#include <cstdint>
#include <limits>


double getValue()
{

    while(true)
    {
        std::cout << "Enter a value: ";
        double value;
        std::cin >>value;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::св<std::streamsize>::max(), '\n');
        }
        else
        {
            std::cin.ignore(32767, '\n');
            return value;
        }
    }

}

char getOperator()
{
    while(true)
    {
        std::cout << "Enter one of the following: +, - , * or /: ";
        char op;
        std::cin >>op;

        std::cin.ignore(32767, '\n');
        if(op == '+' || op == '-' || op == '*' || op == '/' )
            return op;
        else
            std::cout << "Oops , that inpit is invalid.\n";
    }

}


void printResult(double value1, char op , double value2)
{
    if (op == '+')
        std::cout << value1 << " + " << value2 << " is " << value1+value2 <<'\n';
    else if (op == '-')
        std::cout << value1 << " - " << value2 << " is " << value1-value2 <<'\n';
    else if (op == '*')
        std::cout << value1 << " * " << value2 << " is " << value1*value2 <<'\n';
    else if (op == '/')
        std::cout << value1 << " / " << value2 << " is " << value1/value2 <<'\n';
    else
        std::cout << "Something went wrong: func got an invalid operotr" <<'\n';
}


int main()
{
    //test-----------------------------------------
    // std::int16_t x {0};// -32768 32767
    // std::cout << "Enter a value -32768 32767 : ";
    // std::cin>> x;

    // std::int16_t y {0};// -32768 32767
    // std::cout << "Enter a value -32768 32767 : ";
    // std::cin>> y;


    // std::cout << "The sum is: " << x+y <<'\n';


    //-----------------------------

    double a = getValue();
    char op = getOperator();
    double b = getValue();


    printResult(a, op , b);


    return 0;
}