#include <iostream>


int main()
{
    const int n_students = 7;
    int scores[n_students] = {44 , 22, 54 , 23 , 67 , 99 , 29};


    for (int student = 0; student < n_students; ++student)
        std::cout<<"Score: " <<scores[student] <<'\n';


    for(const int &number : scores)
        std::cout<< "Score: " << number << '\n';

    std::vector<int> math = {44,22,54,23,67,99,29};
    for(const int &number : math)
        std::cout<< "Score: " << number << '\n';

    return 0;
}