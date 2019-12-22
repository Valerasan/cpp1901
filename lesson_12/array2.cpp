#include <iostream>
#include <cmath>
// #include <cstring>
using namespace std;

int  main()
{
    const int number = 6;
    int arr[number];
    // cout << sizeof(arr) <<endl;

    int count = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < count ; i++)
    {
        arr[i] = i*2;
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    for(int i = 0; i < count ; i++)
    {
        // cout<<arr[i]*arr[i]<<endl; // v1
        cout<<pow(arr[i],2)<<endl; // v2
    }

    return 0;
}