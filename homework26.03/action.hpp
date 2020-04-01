#ifndef ACTION_HPP
#define ACTION_HPP
#include "struct.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

int get_int()
{
    int number  = 0;
    std::cout<<"Enter the number: ";
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

void delete_item(std::vector<auto> &myVec)
{
    auto tmp = 0;
    std::cout<<"Enter the number's index , which you want to delete: ";
    std::cin>>tmp;
    myVec.erase(myVec.begin()+tmp);
    for (auto const &element : myVec){std::cout<< element<<' ';}
    std::cout<<std::endl;
}


date c_time()
{
    date tmp;

    std::cout << "Enter the Date of Birth" << std::endl;
    std::cout << "Day: ";
    std::cin >> tmp.day;
    std::cout << "Month: ";
    std::cin >> tmp.month;
    std::cout << "Year: ";
    std::cin >> tmp.year;
    return tmp;

}

objects c_objects()
{
    objects tmp;
    bool menu1 = true;


    std::cout << "1.Add odject " << std::endl;
    std::cout << "3.Delate object " << std::endl;
    std::cout << "2.Exit " << std::endl;

        // for (auto const &element : tmp.property){std::cout<< element<<' ';}
        // std::cout<<std::endl;
    while(menu1 == true)
    {
        switch(get_int())
        {
            case 1:
                tmp.property.push_back(get_string());
                break;
            case 2:
                delete_item(tmp.property);
                break;
            case 3:
                menu1 = false;
                break;
        }
    }

    return tmp;
}


void addClient(std::vector<auto> &myVec)
{
    customer tmp;

    std::cout << "Enter your surname: ";
    std::cin >> tmp.surname;
    // std::cout << "Name: " << tmp.name << std::endl;
    std::cout << "Enter your name: ";
    std::cin >> tmp.name;
    std::cout << "Enter your age: ";
    std::cin >> tmp.age;


    tmp.c_date = c_time();
    // std::cout << "Day: " << tmp.c_date.day << std::endl;
    std::cout << "Married True/False: ";
    std::cin >> tmp.married;

    tmp.c_property = c_objects();





}





#endif