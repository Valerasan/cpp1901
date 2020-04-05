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
    while(menu1 == true)
    {
        std::cout << "-------------------------------------------"<<std::endl;
        std::cout << "  1.Add odject " << std::endl;
        std::cout << "  2.Delate object " << std::endl;
        std::cout << "  3.Exit " << std::endl;
        std::cout << "-------------------------------------------"<<std::endl;
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
    std::cout<<std::endl;
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
    std::cin >> tmp.flat_number;
    std::cout << "Enter the city: ";
    std::cin >> tmp.city;
    std::cout << "Enter the country: ";
    std::cin >> tmp.country;
    std::cout << "Enter the post index: ";
    std::cin >> tmp.post_index;
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
    std::cout << "Married 1-Yes/0-No: ";
    std::cin >> tmp.married;
    tmp.c_property = c_objects();
    tmp.adress = c_adress();
    tmp.c_profit = wage();
    tmp.credit = credit();

    myVec.push_back(tmp);
}

void listOfClient(std::vector<auto> &myVec )
{
    int index = 0;
    std::cout << "-------------------------------------------"<<std::endl;
    for (int i = 0; i < myVec.size(); i++)
    {
        std::cout << i << ") " << myVec[i].surname << " " << myVec[i].name << " ";
    }
    std::cout<<std::endl;
    std::cout << "-------------------------------------------"<<std::endl;

    std::cout << "Enter the index of client,which you want to see: ";
    std::cin >> index;

    std::cout << "Client index: [" << index << "]" << std::endl;
    std::cout << myVec[index].surname << " " << myVec[index].name << std::endl;
    std::cout << "Age: " << myVec[index].age << std::endl;
    std::cout << "Date of birth: " << myVec[index].c_date.day << "." << myVec[index].c_date.month << "." << myVec[index].c_date.year << std::endl;
    std::cout << "Mariede " << myVec[index].married << std::endl;
    std::cout << "Property: " ;
    // for (auto const &element : myVec[index].c_property){std::cout<< element[index].c_property<<' ';}
    // std::cout<<std::endl;
    // std::cout << "Clidren: ";
    std::cout << "Adress: " << myVec[index].adress.street << "  " << myVec[index].adress.hous_number << ",Flat number: " << myVec[index].adress.flat_number <<" " <<myVec[index].adress.city <<","<< myVec[index].adress.country << std::endl;
    std::cout << "Post index: " << myVec[index].adress.post_index << std::endl;
    std::cout << "Wage: " << myVec[index].c_profit.count << " " << myVec[index].c_profit.currency <<std::endl;
    std::cout << "Credit: "<< myVec[index].credit.count << " Year percent: " << myVec[index].credit.percent << "%" << std::endl;

}

void creditCalculation(std::vector<auto> &myVec )
{
    int index = 0;
    std::cout << "-------------------------------------------"<<std::endl;
    float credit_number = 0;
    for (int i = 0; i < myVec.size(); i++)
    {
        std::cout << i << ") " << myVec[i].surname << " " << myVec[i].name << " ";
    }
    std::cout<<std::endl;
    std::cout << "-------------------------------------------"<<std::endl;

    std::cout << "Enter the index of client,which you want to calculate the credit: ";
    std::cin >> index;
    credit_number = (myVec[index].credit.count + (myVec[index].credit.count * myVec[index].credit.percent) / 100)/12;

    std::cout <<"You have to pay: " << credit_number << " per month." << std::endl;
}


#endif