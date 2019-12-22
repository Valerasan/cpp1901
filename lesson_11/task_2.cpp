#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    do{
        cout<<"enter the number: "<<endl;
        cin>>x;                     //запрашиваем число
    }while(x<0 || x>10 || x==5 ); //ставим ограничение

    cout<<x*10<<endl;

    return 0;
}