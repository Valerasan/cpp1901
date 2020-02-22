#include <iostream>
using namespace std;

int main()
{
    int c = 0;
    float f = 0;
    for(int i=0; i<32; i++)
    {
        int c = c+1;
        float f=(c*1.8)+32;
        cout<<"  "<<"C"<<" "<<"F"<<endl;
        cout<<i<<" "<<c<<""<<f<<endl;
    }


    return 0;
}