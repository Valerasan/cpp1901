#ifndef STRUCT_HPP
#define STRUCT_HPP
#include <string>
#include <vector>


typedef struct
{
    int day;
    int month;
    int year;
} date;

typedef struct
{
    std::vector <std::string> property;
} objects;

typedef struct
{
    enum Children
    {
        CHILDREN_ZERO,
        CHILDREN_ONE,
        CHILDREN_TWO,
        CHILDREN_THREE,
        CHILDREN_FOUR,
        CHILDREN_FIVE,
    };
} children;

typedef struct
{
    int hous_number;
    std::string street;
    int flat_number;
    int post_index;
    std::string city;
    std::string country;
} workplace;

typedef struct
{
    int count;
    int corrency;
} profit;

typedef struct
{
    int count;
    int percent;
} credit_amount;


typedef struct
{
    std::string surname;
    std::string name;
    std::string second_name;
    short int age;
    date c_date;
    bool married;
    objects c_property;
    children c_child;
    workplace adress;
    profit c_profit;
    credit_amount credit;
    
    
} customer;

#endif