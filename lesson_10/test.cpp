#include <iostream>
using namespace std;


int main()
{
    int a = 1;
    int b = 0;
    int c = 1;
    int d = 0;
    bool e = a|| !b && !c || b >=c && !d;
    cout<< e<< endl;
    return 0;
}