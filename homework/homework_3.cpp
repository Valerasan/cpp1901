#include <iostream>
using namespace std;


int main()
{
    int x = 0;
    cout<<"enter the number: \n";
    cin>>x;
    int a = x/10000;
    int b = (x%10000)/1000;
    int c = ((x%10000)%1000)/100;
    int d = (((x%10000)%1000)%100)/10;
    int e = x%10;

    int num = a*(16)+b*(8)+c*(4)+d*(2)+e*1;

    cout<<num<<endl;


    return 0;
}