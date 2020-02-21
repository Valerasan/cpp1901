#include <iostream>
#include "speed.hpp"
#include "counter.hpp"
#include "randomNumber.hpp"
int main()
{
    srand(time(0));
    int S_time = 0;
    std::cout<<"Enter the time: "<<std::endl;
    std::cin>>S_time;
    std::cout<<"--------------------------------------"<<std::endl;
    std::cout<<"Количество отрезков   = "<<CONSTANTA()<<std::endl;
    std::cout<<"--------------------------------------"<<std::endl;
    for(int i = 0; i<CONSTANTA(); i++)
    {
        std::cout<<"Отрезок ["<<i<<"] = "<<line(i)<<std::endl;
    }
    std::cout<<"--------------------------------------"<<std::endl;
    std::cout<<"--------------------------------------"<<std::endl;
    std::cout<<"Общая длина отрезков = "<<lineLenght()<<std::endl;
    std::cout<<"Скорость             = "<<speed(S_time)<<std::endl;


    return 0;
}