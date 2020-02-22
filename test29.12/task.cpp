#include <iostream>
using namespace std;
int enterNumber();
int main()
{
    const int COUNT = 10;
    int arr[COUNT];
    for (int index = 0; index<COUNT ; index ++)
    {
        cout<<"enter element of array:"<<endl;
        arr[index]=enterNumber();
    }
    cout<<""<<endl;
    /////////////////// содержимое масива,вывод на екран  1
    for (int index = 0; index<COUNT ; index ++){cout<<arr[index]<<endl;}
    //////////////////// среднее арифметическое
    float a = 0;
    for (int index = 0; index<COUNT ; index ++){a=a+arr[index];}
    cout<<"среднее арифметическое:"<<a/10<<endl;
    cout<<""<<endl;
    ////////////////////numbers wich more 7
    cout<<"number > 7:"<<endl;
    for (int index = 0; index<COUNT ; index ++)
    {
        if (arr[index]>7){cout<<arr[index]<<endl;}
        else{cout<<"";}
    }
    cout<<""<<endl;
    //////////////////// sum of all even numbers
    int sum = 0;
    for (int index = 0; index<COUNT ; index ++)
    {
        if (arr[index]%2==0){sum = sum + arr[index];}
        else{cout<<"";}
    }
    cout<<"sum of arrays:"<<sum<<endl;
    cout<<""<<endl;
    //////////////////////max number
    int max = arr[0];
    for (int index = 0; index < COUNT; index++)
    {
        if (arr[index] > max){ max = arr[index];}
    }
    cout<<"max number:"<<max<<endl;
    cout<<""<<endl;
    /////////////////////////number more than L
    cout<<"Enter number L:"<<endl;
    int L = enterNumber();
    cout<<""<<endl;
    for (int index = 0; index < COUNT; index++)
    {
        if (arr[index] > L){ arr[index]= 5;}
        cout<<arr[index]<<endl;
    }
    cout<<""<<endl;
    ////////////////////////сумму элементов массива кратных 3.
    int sum2 = 0;
    for (int index = 0; index<COUNT ; index ++)
    {
        if (arr[index]%3==0){sum2 = sum2 + arr[index];}
        else{cout<<"";}
    }
    cout<<"sum of arrays:"<<sum2<<endl;


    return 0;
}



int enterNumber()
{
    int number = 0;
    cin>>number;
    return number;
}