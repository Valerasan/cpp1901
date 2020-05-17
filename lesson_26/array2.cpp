#include <iostream>
using namespace std;

int main()
{
    int i = 0, n =0;
    int * p;

    cout<<"How many numbers would you like to type?";
    cin >> i;

    p = new (nothrow) int[i];
    if (p == nullptr)
        cout << "Error: memory couldn`t be allocated";
    else
    {
        for(n = 0 ; n < i; n++)
        {
            // cout <<"Entre " << (n + 1) << " Number of " << i << ":";
            // cin >> p[n];
            p[n] = (rand() % 10)+1;
        }
        cout << "ypue have netred : ";
        for (n = 0; n < i ; n++)
            cout << p[n] << ", ";
        cout << endl;
        delete[] p;


    }


    return 0;
}