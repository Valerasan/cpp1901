#include <iostream>
using namespace std;
int getValueFromUser(){
    int y = 0;
    cout<<"Enter the number: ";
    cin >> y ;
    return y;
}

int main()
{
    int x = getValueFromUser();


    if( x==1 )
    {
        cout<<"You picked 0 or 1 "<<endl;
    }
    else if (x==0)
    {
        cout<<"You picked 0 or 1 "<<endl;
    }
    else
    {
        cout<<"Error"<<endl;
    }


    return 0;
}