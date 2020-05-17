#include <iostream>
#include <cstring>

int main()
{
    std::cout<< "Enter a positiv integer: ";
    int length = 0;
    std::cin>> length;
    int *array = new int[length];


    for (int i = 0; i < lenght; i++ )
        array[i] = 0;


    for (int i = 0; i < length; i++ )
    {
        std::cout << "Enter " << i << " number of " << lenght << " : ";
        std::cin >> array[i];

    }




    return 0;
}