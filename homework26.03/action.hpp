#ifndef ACTION_HPP
#define ACTION_HPP
#include <iostream>
#include <vector>
#include <algorithm>

int get_int()
{
    int number  = 0;
    // std::cout<<"Enter the number: ";
    std::cin>>number;
    return number;
}

std::string get_string()
{
    std::string word = "";
    // std::cout<<"Enter the word: ";
    std::cin>>word;
    return word;
}


void addClient(std::vector<auto> &myVec)
{
    myVec.push_back(customer());
    std::cout<<"Enter the surname: ";
    std::cin>>myVec[myVec.end()].surname;
    std::cout<<myVec[myVec.end()].surname;
}





#endif