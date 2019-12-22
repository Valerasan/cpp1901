#include <iostream>
#include <string>
using namespace std;
int getValueFromUser();

int main()
{
    const short COUNT = getValueFromUser();
    int arr[COUNT][COUNT];
    for (int i = 0; i<COUNT ; i ++)
    {   for(int j = 0; j<COUNT; j++)
        {
        arr[i][j]=0;
        }
    }






    return 0;
}


int getValueFromUser()
{
    int x = 0;
    cout<<"Enter the number: ";
    cin >> x ;
    return x;
}
