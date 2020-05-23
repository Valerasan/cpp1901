#include "bank.h"
#include "client.h"

#include <iostream>
#include <vector>
#include <algorithm>

Bank::Bank()
{

}

void Bank::addObject(std::vector<Client> &myVec)
{
    Client tmp;
    std::string word;
    int a = 0;
    int index4 = 0;
    bool menu1 = true;
    while(menu1 == true)
    {
        std::cout << "-------------------------------------------"<<std::endl;
        std::cout << "  1.Add odject " << std::endl;
        std::cout << "  2.Delate object " << std::endl;
        std::cout << "  3.Exit " << std::endl;
        std::cout << "-------------------------------------------"<<std::endl;
        std::cout << "Choose the action: ";
        std::cin >> a;
        switch(a)
        {
            case 1:
                std::cout << "Wich object do you wantb to add: ";
                std::cin >> word;
                tmp.objects.push_back(word);
                break;
            case 2:
                for (auto const &element : tmp.objects){std::cout<< element<<' ';}
                std::cout<<std::endl;
                std::cout<<"Enter the number's index , which you want to delete: ";
                std::cin >> index4;
                tmp.objects.erase(tmp.objects.begin()+index4);
                break;
            case 3:
                menu1 = false;
                break;
        }
    }
}

void Bank::addClient(std::vector<Client> &myVec)
{
    Client tmp;

    std::cout << "Enter your surname: ";
    std::cin >> tmp.surname;
    std::cout << "Enter your name: ";
    std::cin >> tmp.name;
//    std::cout << "Enter your age: ";
//    std::cin >> tmp.age;
//    std::cout << "Enter the Date of Birth" << std::endl;
//    std::cout << "Day: ";
//    std::cin >> tmp.day;
//    std::cout << "Month: ";
//    std::cin >> tmp.month;
//    std::cout << "Year: ";
//    std::cin >> tmp.year;

    std::cout << "Married 1-Yes/0-No: ";
    std::cin >> tmp.married;

    Bank::addObject(myVec);

//    std::cout << "Enter hous number: ";
//    std::cin >> tmp.hous_number;
//    std::cout << "Enter the street: ";
//    std::cin >> tmp.street;
//    std::cout << "Enter flat number: ";
//    std::cin >> tmp.flat_number;
//    std::cout << "Enter the city: ";
//    std::cin >> tmp.city;
//    std::cout << "Enter the country: ";
//    std::cin >> tmp.country;
//    std::cout << "Enter the post index: ";
//    std::cin >> tmp.post_index;

//    std::cout << "Enter your wage: ";
//    std::cin >> tmp.count_w;
//    std::cout << "Entre the currency: ";
//    std::cin >> tmp.currency;
    std::cout << "Enter count of credit: ";
    std::cin >> tmp.count_c;
    std::cout << "Entre the year percent: ";
    std::cin >> tmp.percent;

    myVec.push_back(tmp);
}


void Bank::print(std::vector<Client> &myVec)
{
    int i = 0;
    std::cout << "-------------------------------------------"<<std::endl;
    for (int index = 0; index < myVec.size(); index++)
    {
        std::cout << index << ") " << myVec[index].surname << " " << myVec[index].name << " ";
    }
    std::cout<<std::endl;
    std::cout << "-------------------------------------------"<<std::endl;

    std::cout << "Enter the index of client,which you want to see: ";
    std::cin >> i;

    std::cout << myVec[i].surname << " " << myVec[i].name << std::endl;
    std::cout << "Age: " << myVec[i].age << std::endl;
    std::cout << "Date of birth: " << myVec[i].day << "." << myVec[i].month << "." << myVec[i].year << std::endl;
    std::cout << "Mariede " << myVec[i].married << std::endl;
    std::cout << "Property: " ;
    for (auto const &element : myVec[i].objects){std::cout<< element<<" ,";}
    std::cout<<std::endl;
    std::cout << "Adress: " << myVec[i].street << "  " << myVec[i].hous_number << ",Flat number: " << myVec[i].flat_number <<" " << myVec[i].city <<","<< myVec[i].country << std::endl;
    std::cout << "Post index: " << myVec[i].post_index << std::endl;
    std::cout << "Wage: " << myVec[i].count_w << " " << myVec[i].currency <<std::endl;
    std::cout << "Credit: "<< myVec[i].count_c << " Year percent: " << myVec[i].percent << "%" << std::endl;
}


void Bank::delete_item(std::vector<Client> &myVec)
{
    std::cout << "-------------------------------------------"<<std::endl;
    for (int index = 0; index < myVec.size(); index++)
    {
        std::cout << index << ") " << myVec[index].surname << " " << myVec[index].name << " ";
    }
    std::cout<<std::endl;
    std::cout << "-------------------------------------------"<<std::endl;


    auto i = 0;
    std::cout<<"Enter the number's index , which you want to delete: ";
    std::cin>>i;
    myVec.erase(myVec.begin()+i);
    std::cout<<std::endl;
}


void Bank::creditNumber(std::vector<Client> &myVec)
{
    int credit_number = 0;
    int i = 0;
    std::cout << "-------------------------------------------"<<std::endl;
    for (int index = 0; index < myVec.size(); index++)
    {
        std::cout << index << ") " << myVec[index].surname << " " << myVec[index].name << " ";
    }
    std::cout<<std::endl;
    std::cout << "-------------------------------------------"<<std::endl;

    std::cout << "Enter the index of client,which you want to calculate the credit: ";
    std::cin >> i;
    credit_number = (myVec[i].count_c + (myVec[i].count_c * myVec[i].percent) / 100)/12;

    std::cout <<"You have to pay: " << credit_number << " per month." << std::endl;
}

