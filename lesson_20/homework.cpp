#include "lib.hpp"
#include <ctime>
#include <string>
int randomNumber();

int main()
{
    srand(time(0));
    std::string name;
    int summ = 0;
    int summ2 =0;
    int length = getNameLength(name);
    int array[length];
    for(int i = 0 ; i<length ; i++)
    {
        array[i] = randomNumber();
        std::cout << "array["<<i<<"] "<<array[i]<<std::endl;
        summ += array[i];//sum = summ + array[i];
        if(array[i]%2 == 0){summ2 += array[i];}
    }
    std::cout<<"avarage " << (float)summ/length <<std::endl;
    std::cout<<"Summ:"<<summ<<std::endl;
    std::cout<<"Summ2:"<<summ2<<std::endl;
    return 0;
}

int randomNumber()
{
    return 1 + rand()%30;

}