#include <iostream>


using namespace std;

int main(){
    const float pi = 3.14;

    float r = 0;
    float L = 0;
    cout << "enterthe radius: ";
    cin >> r ;
    L = pi*r*2;
    cout << "Answer: " << L << endl;

    return 0;


}