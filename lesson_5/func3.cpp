#include <iostream>
using namespace std;

int getValueFromUser(){
    int x = 0;
    cout<<"Enter the number: ";
    cin >> x ;
    return x;
}


int main(void){
    int a =  getValueFromUser();
    int b =  getValueFromUser();

    cout<< "a+b="<< a + b << endl;


    return 0;


}