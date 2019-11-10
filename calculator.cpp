#include <iostream>
using namespace std;
int getValueFromUser(){
    int x = 0;
    cout<<"Enter the number: ";
    cin >> x ;
    return x;
}
int add(int a, int b){

    return a+b;
}

int subtruct(int a, int b){
    return a-b;
}

int multiply(int c, int d){
    return c*d;
}

int delenie(int c,int b){
    return c/b;
}

int main(){
    cout<<"Add"<<add(getValueFromUser(),getValueFromUser())<<endl;




}