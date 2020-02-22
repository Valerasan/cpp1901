#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));
    int min= 30;
    int max= 60;
    // std::cin>>min;
    // std::cin>>max;
    for(int i=0;i<20;i++)std::cout<<min + rand() % (max - min)<<std::endl;
    return 0;
}