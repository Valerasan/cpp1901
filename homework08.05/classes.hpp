#ifndef CLASSES_HPP
#define CLASSES_HPP


#include <iostream>
#include <string>
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
    std::cin>>word;
    return word;
}


class Client
{
public:
    std::string surname;
    std::string name;
    std::string second_name;
    short int age;
    bool married;

    int day;
    int month;
    int year;

    std::vector <std::string> objects;

    int hous_number;
    std::string street;
    int flat_number;
    int post_index;
    std::string city;
    std::string country;

    int count_w;
    std::string currency;

    int count_c;
    float percent;

    void print()
    {

    std::cout << surname << " " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Date of birth: " << day << "." << month << "." << year << std::endl;
    std::cout << "Mariede " << married << std::endl;
    std::cout << "Property: " ;
    for (auto const &element : objects){std::cout<< element<<" ,";}
    std::cout<<std::endl;
    std::cout << "Adress: " << street << "  " << hous_number << ",Flat number: " << flat_number <<" " << city <<","<< country << std::endl;
    std::cout << "Post index: " << post_index << std::endl;
    std::cout << "Wage: " << count_w << " " << currency <<std::endl;
    std::cout << "Credit: "<< count_c << " Year percent: " << percent << "%" << std::endl;

    }

    void creditCalculation()
    {
        auto credit_number = 0;
        credit_number = (count_c + (count_c * percent) / 100)/12;
        std::cout <<"You have to pay: " << credit_number << " per month." << std::endl;
    }



};





void delete_item(std::vector<auto> &myVec)
{
    auto tmp = 0;
    std::cout<<"Enter the number's index , which you want to delete: ";
    std::cin>>tmp;
    myVec.erase(myVec.begin()+tmp);
    for (auto const &element : myVec){std::cout<< element<<' ';}
    std::cout<<std::endl;
}



void addObjects(std::vector<auto> &myVec)
{
    std::cout << "Wich object do you wantb to add: ";
    myVec.push_back(get_string());
}



void addClient(std::vector<auto> &myVec)
{
    Client tmp;

    std::cout << "Enter your surname: ";
    std::cin >> tmp.surname;
    std::cout << "Enter your name: ";
    std::cin >> tmp.name;
    std::cout << "Enter your age: ";
    std::cin >> tmp.age;
    std::cout << "Enter the Date of Birth" << std::endl;
    std::cout << "Day: ";
    std::cin >> tmp.day;
    std::cout << "Month: ";
    std::cin >> tmp.month;
    std::cout << "Year: ";
    std::cin >> tmp.year;

    std::cout << "Married 1-Yes/0-No: ";
    std::cin >> tmp.married;
/////////////////////////////////
    int index4 = 0;
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
                tmp.objects.push_back(get_string());
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
////////////////////////////////

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

    std::cout << "Enter your wage: ";
    std::cin >> tmp.count_w;
    std::cout << "Entre the currency: ";
    std::cin >> tmp.currency;
    std::cout << "Enter count of credit: ";
    std::cin >> tmp.count_c;
    std::cout << "Entre the year percent: ";
    std::cin >> tmp.percent;


    myVec.push_back(tmp);
}



#endif



