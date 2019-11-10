#include <iostream>
#include "calculate.hpp"
// #include "add.hpp"
using namespace std;

#define COUNT 1000
#define NAME "Valera"
const int NUMBER = 100;


int main(void){
    cout<<NAME<<endl;
    cout<<add(COUNT,7)<<endl;
    cout<<multiply(3,7)<<endl;
    cout<<division(7,3)<<endl;
    cout<<subtract(3,7)<<endl;

    return 0;
}


