#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "func.hpp"
int randomNumber();


int main()
{
    srand(time(0));
    std::string name;
    std::cout << "Enter your name:" << std::endl;
    std::cin>>name;
    std::cout << "Hello, " << name << "!" << "Your name has " << name.length() << " characters" << std::endl;

    function(name.length());
    return 0;
}


