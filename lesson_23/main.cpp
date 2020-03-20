#include <iostream>
#include "struct.hpp"
using namespace std;

string get_name(person man )
{

    return man.name;
}

int main()
{
    person vasiliy;
    vasiliy.name = "Vasiliy";
    vasiliy.age = 21;
    vasiliy.height = 190;
    vasiliy.weight = 90;
    vasiliy.country = "Poland";
    vasiliy.married = false;
    person ivan = {"Ivan" , 20 , 170 , 80 , "Ukraine" , true};
    cout<< "name = "<< ivan.name <<endl;


    person people[3];
    people[0] = {"Ivan" , 20 , 170 , 80 , "Ukraine" , true};
    people[1] = {"Vlad" , 26 , 160 , 60 , "USA" , true};
    people[2] = {"Petro" , 40 , 185 , 90 , "Poland" , false};

    for(int i = 0; i<=2 ; i++)
    {
        cout<<"name = "<<people[i].name<<endl;
        //cout<<"name = "<<get_name(people[i])<<endl;
    }

    cout << get_name(ivan)<<endl;
    car machine[2];
    for(int i = 0; i < 2; i++)
    {
        cout<<"Enter characteristic "<<endl;
        cout<<"marka["<< i << "] = ";
        cin>>machine[i].marka;
        cout<<"speed["<< i << "] = ";
        cin>>machine[i].speed;
        cout<<"type["<< i << "] = ";
        cin>>machine[i].type;
        cout<<"car["<< i << "]: "<<"marka = "<<machine[i].marka<<"; speed = "<<machine[i].speed<<"; type = "<<machine[i].type<<endl;
    }


    return 0;
}