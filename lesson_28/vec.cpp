#include <iostream>
#include <vector>


void printStack(const std::vector<auto> &stack)
{

    for(auto const &element : stack)
        std::cout << element << ' ';
     std::cout << '\n';
}








int main()
{
    // int *array = new int[12] {1 , 2 , 3, 4, 5};

    std::vector<int> vec {3 , 4, 7, 8, 9, 20, 11, 23, 23};
    // vec.resize(2);

    // std::cout << "The lenght is: " << vec.size() <<'\n';
    // std::cout << "The capacity is: " << vec.capacity() << '\n';
    printStack(vec);
    vec = {1, 2, 3, 4};
    vec.reserve(11);
    // std::cout << "The lenght is: " << vec.size() <<'\n';
    // std::cout << "The capacity is: " << vec.capacity() << '\n';
    printStack(vec);


    // for(auto const &element : vec)
    //         std::cout << element << ' ';
    // std::cout << '\n';


    printStack(vec);


    vec.push_back(6);

   printStack(vec);


    std::cout << vec.back() << '\n';
    vec.pop_back();

     printStack(vec);


    return 0;
}