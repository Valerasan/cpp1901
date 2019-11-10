#include <iostream>
using namespace std;


int main()
{   int x = 0;
    do
    {
        cout<<"Enter the number 1-5: "<<endl;
        cin>>x;

    }while (x<0 && x>6);

    switch (x)
    {
        case 1:
            cout<<"Большой палец"<<endl;
            break;
        case 2:
            cout<<"Указательный палец"<<endl;
            break;
        case 3:
            cout<<"Средний палец"<<endl;
            break;
        case 4:
            cout<<"Безымянный палец"<<endl;
            break;
        case 5:
            cout<<"Мизинец"<<endl;
            break;
    }

    return 0;
}