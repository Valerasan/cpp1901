#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char name[20];
    char address[15];

    cout<<"enter your name: ";
    cin.get(name,20).get();


     cout<<"enter your addres: ";
    cin.get(address,15);

    cout << "your name is " << " " << name<<", and your address is "<<address << endl;
    return 0;
}