#include <iostream>
#include <vector>
#include "client.h"
#include "bank.h"

using namespace std;

int main()
{
    Bank bank;
    std::vector <Client> client;
    bool menu = true;
    short int  a;
    while(menu == true)
    {
        std::cout << "-------------------------------------------"<<std::endl;
        std::cout << "Chose the action: " <<std::endl;
        std::cout << "  1.Add client " <<std::endl;
        std::cout << "  2.List of clients " <<std::endl;
        std::cout << "  3.Delate client " <<std::endl;
        std::cout << "  4.Calculate the credit " <<std::endl;
        std::cout << "  5.Exit " <<std::endl;
        std::cout << "-------------------------------------------"<<std::endl;
        std::cout << "Enter the number: ";
        std::cin >> a;
        switch(a)
        {
            case 1:
                bank.addClient(client);
                break;
            case 2:
                bank.print(client);
                break;
            case 3:
                bank.delete_item(client);
                break;
            case 4:
                bank.creditNumber(client);
                break;
            case 5:
                menu = false;
                break;
        }

    }

    return 0;
}
