#include <iostream>
using namespace std;

int main(){
    int age = 0;
    do
    {
        cout<<"Enter your age: ";
        cin>>age;

    } while (age <=0);


    if ( age > 0 && age < 3)
    {
        cout<<"Babby \n";
    }
    else if (age >= 3 && age < 9)
    {
        cout<<"Child \n";
    }
    else if (age >= 9 && age < 18 )
    {
        cout<<"teenager \n";
    }
    else
    {
        cout<<"elder \n";
    }

    return 0;
}