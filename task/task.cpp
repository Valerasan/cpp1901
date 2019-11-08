#include <iostream>
using namespace std;

int main(){

    int money = 0;
    cout<<"Enter the number (1-4444)";
    cin>>money;

    int thausend = money / 1000;
    int hundred = (money - thausend*1000)/100;
    int ten = (money - thausend*1000 - hundred*100)/10;
    int one = (money - thausend*1000 - hundred*100 - ten*10 );
    // cout<<thausend<<endl;
    // cout<<hundred<<endl;
    // cout<<ten<<endl;
    // cout<<one<<endl;

    switch (thausend)
    {
    case 0:
        cout<<"";
        break;
    case 1:
        cout<<"одна тысяча ";
        break;
    case 2:
        cout<<"две тысячи ";
        break;
    case 3:
        cout<<"три тысячи ";
        break;
    case 4:
        cout<<"четыри тысячи ";
        break;

    }
    switch (hundred)
    {
    case 0:
        cout<<"";
        break;
    case 1:
        cout<<"сто ";
        break;
    case 2:
        cout<<"двести ";
        break;
    case 3:
        cout<<"триста  ";
        break;
    case 4:
        cout<<"четыриста ";
        break;

    }
    switch (ten)
    {
    case 0:
        cout<<"";
        break;
    case 1:
        cout<<"десять ";
        break;
    case 2:
        cout<<"двадцать ";
        break;
    case 3:
        cout<<"тридцать  ";
        break;
    case 4:
        cout<<"сорок ";
        break;

    }
    switch (one)
    {
    case 0:
        cout<<"";
        break;
    case 1:
        cout<<"один ";
        break;
    case 2:
        cout<<"два ";
        break;
    case 3:
        cout<<"три  ";
        break;
    case 4:
        cout<<"четыри  ";
        break;

    }
    cout<<"доллара";


}