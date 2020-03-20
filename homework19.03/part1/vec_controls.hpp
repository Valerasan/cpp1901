#ifndef VEC_CONTROLS_HPP
#define VEC_CONTROLS_HPP

#include "get_input.hpp"
#include "random.hpp"
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

void random_number(std::vector<auto> &myVec)
{
    std::srand(std::time(0));
    int components = 0;
    int min = 0;
    int max = 0;
    std::cout<<"Enter the numbers of components: ";
    std::cin>>components;
    std::cout<<"Enter the min number: ";
    std::cin>>min;
    std::cout<<"Enter the max number:";
    std::cin>>max;
    for (int i = 0; i<components; i++){myVec.push_back(random(min,max));}
    std::cout<<"---------------------------------------"<<std::endl;
    for (auto const &element : myVec){std::cout<< element<<' ';}
    std::cout<<std::endl;
}


void enterFromUserCycle(std::vector<auto> &myVec)
{
    int components = 0;
    std::cout<<"Enter the numbers of components: ";
    std::cin>>components;
    for (int i = 0; i<components; i++){myVec.push_back(get_int());}
    std::cout<<"---------------------------------------"<<std::endl;
    for (auto const &element : myVec){std::cout<< element<<' ';}
    std::cout<<std::endl;
}

void enterFromUser(std::vector<auto> &myVec)
{
    auto tmp = 0;
    std::cout<<"Enter the number: ";
    std::cin>>tmp;
    myVec.push_back(tmp);
}

void delete_item(std::vector<auto> &myVec)
{
    auto tmp = 0;
    std::cout<<"Enter the number's index , which you want to delete: ";
    std::cin>>tmp;
    myVec.erase(myVec.begin()+tmp);
    for (auto const &element : myVec){std::cout<< element<<' ';}
    std::cout<<std::endl;
}

void change_item(std::vector<auto> &myVec)
{
    auto tmp = 0;
    auto tmp1 = 0;
    std::cout<<"Enter the number's index , which you want to change: ";
    std::cin>>tmp;
    std::cout<<"Enter the number ";
    std::cin>>tmp1;
    myVec.at(tmp) = tmp1;
    for (auto const &element : myVec){std::cout<< element<<' ';}
    std::cout<<std::endl;
}

void sort_ascending(std::vector<auto> &myVec)
{
    std::sort(myVec.begin(),myVec.end());
    for (auto const &element : myVec){std::cout<< element<<' ';}
    std::cout<<std::endl;
}

void sort_descending(std::vector<auto> &myVec)
{
    std::sort(myVec.rbegin(),myVec.rend());
    for (auto const &element : myVec){std::cout<< element<<' ';}
    std::cout<<std::endl;
}

void vector_length(std::vector<auto> &myVec)
{
    std::cout<<"Длина вектора: "<<myVec.size()<<std::endl;
}

void itemFromUser(std::vector<auto> &myVec)
{
    auto tmp = 0;
    std::cout<<"Enter the item: ";
    std::cin>>tmp;
    auto p = std::find (myVec.begin(),myVec.end(), tmp);
        if (p != myVec.end()){
            std::cout << "Елемент : " << *p <<std::endl;
        }else{
            std::cout << "Елемент не найден"<<std::endl;
        }

}


#endif