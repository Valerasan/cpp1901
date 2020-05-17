#include <iostream>
#include <array> //c++ 11
#include <algorithm>

void printLength(const std::array<auto,5> &myArray)
{
    std::cout<<"arrat length = " <<myArray.size()<<std::endl;
}




int main()
{
    // int n;
    // std::cin>>n;
    int number {4};
    const int COUNT (5);
    std::array<double, COUNT> arr3  {1,2,3,4,5};
    // std::array<int, n> arr2; //обявление
    std::array<int, 5> arr = {6,3,9,2,7}; //обявление и иницализация
    //2D
    // std::array<int,<int, 3>3> arr2d = {{1,2,3},{4,5,6},{7,8,9}};
    for (const auto &element : arr)
        std::cout << element << ' ';
    std::cout<<std::endl;
    arr[0] = 78;
    arr.at(2) = 10;
    for (const auto &element : arr)
        std::cout << element << ' ';

    std::sort(arr.begin(),arr.end());

    std::cout<<std::endl;

    for (const auto &element : arr)
        std::cout << element << ' ';
    std::cout<<arr.at(0)<<std::endl;
    std::cout<<arr.size()<<std::endl;

    //std::sort(arr.begin(),arr.end()); erro
    std::sort(arr.rbegin(),arr.rend());

    std::cout<<std::endl;

    for (const auto &element : arr)
        std::cout << element << ' ';


    std::cout<<std::endl;
    printLength(arr);

    return 0;
}