#include <iostream>
#include <vector>
int main()
{
    std::vector<int> date  {1 , 3, 5, 6, 9};


    for (auto const &element : date)
    {
        std::cout << element <<std::endl;
    }
    return 0;
}