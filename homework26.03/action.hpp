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
    while(menu1 == true)
    {

        switch(get_int())
        {
            case 1:
                std::cout << "Wich object do you wantb to add: ";
                tmp.property.push_back(get_string());
                break;
            case 2:
                for (auto const &element : tmp.property){std::cout<< element<<' ';}
                std::cout<<std::endl;
                delete_item(tmp.property);
                break;
            case 3:
                menu1 = false;
                break;
        }
    }

    return tmp;
}



// children family(Children number)
// {
//     children tmp;
//     Children number;
//     std::cout << "entr the number of cildren: ";
//     std::cout >> number;

//     if(number == CHILDREN_ZERO)
//         tmp.Children = 0;
//     else if (number == CHILDREN_ONE)
//         tmp.Children = 1;


//     return tmp;
// }





workplace c_adress()
{
    workplace tmp;
    std::cout << "Enter hous number: ";
    std::cin >> tmp.hous_number;
    std::cout << "Enter the street: ";
    std::cin >> tmp.street;
    std::cout << "Enter flat number: ";
    std::cin >> tmp.post_index;
    std::cout << "Enter the city: ";
    std::cin >> tmp.city;
    std::cout << "Enter the country: ";
    std::cin >> tmp.country;
    return tmp;
}



profit wage()
{
    profit tmp;

    std::cout << "Enter your wage: ";
    std::cin >> tmp.count;
    std::cout << "Entre the currency: ";
    std::cin >> tmp.currency;

    return tmp;
}

credit_amount credit()
{
    credit_amount tmp;
    std::cout << "Enter count of credit: ";
    std::cin >> tmp.count;
    std::cout << "Entre the year percent: ";
    std::cin >> tmp.percent;
    return tmp;
}


void addClient(std::vector<auto> &myVec)
{
    customer tmp;

    std::cout << "Enter your surname: ";
    std::cin >> tmp.surname;
    std::cout << "Enter your name: ";
    std::cin >> tmp.name;
    std::cout << "Enter your age: ";
    std::cin >> tmp.age;


    tmp.c_date = c_time();
    std::cout << "Married True/False: ";
    std::cin >> tmp.married;

    tmp.c_property = c_objects();
    tmp.adress = c_adress();
    tmp.c_profit = wage();
    tmp.credit = credit();


    myVec.push_back(tmp);


}

void listOfClient(std::vector<auto> &myVec)
{
    // std::cout << "Client index: " <<
    std::cout << myVec.surname << " " << myVec.name << std::endl;
    std::cout << "Age: " << myVec.age << std::endl;
    std::cout << "Date of birth: " << myVec.c_date.day << "." << myVec.c_date.month << "." << myVec.c_date.year << std::endl;
    std::cout << "Mariede " << myVec.married << std::endl;
    std::cout << "Propery: " ;
    // for (auto const &element : myVec.c_property){std::cout<< element<<' ';}
    // std::cout<<std::endl;
    // // std::cout << "Clidren: ";
    // std::cout << "Adress: " << myVec.street << "  " << myVec.hous_number ;




}



#endif