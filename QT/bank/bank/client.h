#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <string>
#include <vector>

class Client
{
public:
    Client();
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

};

#endif // CLIENT_H
