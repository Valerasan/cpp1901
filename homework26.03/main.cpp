#include "struct.hpp"
#include "action.hpp"
#include <iostream>
#include <vector>


int main()
{
    std::vector <customer> client;

    bool menu = true;
    std::cout << "Hello , dear user!" << std::endl;
    std::cout << "It is our bank,in which you can take credit." << std::endl;

    while (menu == true )
    {
        std::cout << "-------------------------------------------"<<std::endl;
        std::cout << "Chose the action: " <<std::endl;
        std::cout << "  1.Add client " <<std::endl;
        std::cout << "  2.List of clients " <<std::endl;
        std::cout << "  3.Calculate the credit " <<std::endl;
        std::cout << "  4.Exit " <<std::endl;
        std::cout << "-------------------------------------------"<<std::endl;
        switch (get_int())
        {
            case 1:
                addClient(client);
                break;
            case 2:
                listOfClient(client);
                break;
            case 3:
                creditCalculation(client);
                break;
            case 4:
                menu == false;
                exit(0);
                break;
        }
        std::cout << "-------------------------------------------"<<std::endl;
    }
    return 0;
}