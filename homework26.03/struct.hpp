#ifndef STRUCT_HPP
#define STRUCT_HPP
#include <string>
#include <vector>

typedef struct
{
    std::string surname;
    std::string name;
    std::string second_name;
    int age;
    typedef struct
    {
        int day;
        int month;
        int year;

    } date;

    std::vector <std::string> property;

    bool married;

    enum Children
    {
        CHILDREN_ZERO,
        CHILDREN_ONE,
        CHILDREN_TWO,
        CHILDREN_THREE,
        CHILDREN_FOUR,
        CHILDREN_FIVE,
    };

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

} customer;

#endif