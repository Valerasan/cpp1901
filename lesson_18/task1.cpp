#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
int randomNumber();


int main()
{
    srand(time(0));
    std::string name="";
    std::cout<<"Enter your name:"<<std::endl;
    std::cin>>name;
    std::cout<<"Hello! "<<name<<",number "<<name.length()<<std::endl;
    std::cout<<std::endl;
    const int COUNT =randomNumber();
    std::cout<<"const:"<<COUNT<<std::endl;
    int arr[COUNT];
    int x = 0;
    for(int index = 0; index<COUNT; index++)
    {
        x=x+1;
        arr[index]=randomNumber();
        std::cout<<x<<")"<<arr[index]<<std::endl;
    }
    float avarage = 0;
    for(int index = 0; index<COUNT; index++){avarage=avarage+arr[index];}
    std::cout<<"среднее арифметическое:"<<avarage/COUNT<<std::endl;



    int sum = 0;
    for (int index = 0; index<COUNT ; index ++)
    {
        sum = sum + arr[index];
    }
    std::cout<<"sum of arrays:"<<sum<<std::endl;
    std::cout<<std::endl;
    int sum2 = 0;
    for (int index = 0; index<COUNT ; index ++)
    {
        if (arr[index]%2==0){sum2 = sum2 + arr[index];}
        else{std::cout<<"";}
    }
    std::cout<<"sum2 of arrays:"<<sum2<<std::endl;


    return 0;
}

int randomNumber()
{
    int ranNumber =(rand()%10);
    return ranNumber;
}

