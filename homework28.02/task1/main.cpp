#include "print.hpp"
#include "calc.hpp"
#include "getInputNumber.hpp"
#include <iostream>

using namespace std;



int main()
{
    print();
    cout<<summ(getInputNumber() , getInputNumber())<<endl;
    cout<<subtraction(getInputNumber() , getInputNumber())<<endl;
    cout<<multiplication(getInputNumber() , getInputNumber())<<endl;
    cout<<division(getInputNumber() , getInputNumber())<<endl;
    return 0;
}