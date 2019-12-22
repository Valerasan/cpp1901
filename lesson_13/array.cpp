#include <iostream>
#include <string>
using namespace std;
int getValueFromUser();

int main()
{
    const short COUNT = getValueFromUser();
    int arr[COUNT];
    for (int index = 0; index<COUNT ; index ++){arr[index]=0;}






    return 0;
}


int getValueFromUser()
{
    int x = 0;
    cout<<"Enter the number: ";
    cin >> x ;
    return x;
}
