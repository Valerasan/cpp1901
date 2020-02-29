#include <iostream>

using namespace std;
int print();
int getInputNumber();
int summ(int number1 , int number2);
int subtraction(int number1 , int number2);
int multiplication(int number1 , int number2);
float division(float number1 , float number2);


int main()
{
    print();
    cout<<summ(getInputNumber() , getInputNumber())<<endl;
    cout<<subtraction(getInputNumber() , getInputNumber())<<endl;
    cout<<multiplication(getInputNumber() , getInputNumber())<<endl;
    cout<<division(getInputNumber() , getInputNumber())<<endl;
    return 0;
}