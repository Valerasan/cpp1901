#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    do
    {
        cin>>x;
    } while (x > 7);
    switch(x)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout<<"work day\n";
            break;
        case 6:
        case 7:
            cout<<"weekend\n";
            break;

    }


    return 0;
}