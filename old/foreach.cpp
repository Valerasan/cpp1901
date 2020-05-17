#include <iostream>

int main()
{
    int date = {1 , 3, 5, 6, 9};
    for (auto index : date)
        std::cout << index <<std::endl;
    return 0;
}