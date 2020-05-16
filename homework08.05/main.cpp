#include "classes.hpp"
#include <iostream>
#include <vector>


int main()
{
    std::vector <Client> client;

    bool menu = true;
    std::cout << "Hello , dear user!" << std::endl;
    std::cout << "It is our bank,in which you can take credit." << std::endl;

    while (menu == true )
    {
        std::cout << "-------------------------------------------"<<std::endl;
        std::cout << "Chose the action: " <<std::endl;
        std::cout << "  1.Add client " <<std::endl;
        std::cout << "  2.List of clients " <<std::endl;
        std::cout << "  3.Delate client " <<std::endl;
        std::cout << "  4.Calculate the credit " <<std::endl;
        std::cout << "  5.Exit " <<std::endl;
        std::cout << "-------------------------------------------"<<std::endl;
        switch (get_int())
        {
            case 1:
            {
                addClient(client);

            }
            break;
            case 2:
            {
                int index1 = 0;
                std::cout << "-------------------------------------------"<<std::endl;
                for (int i = 0; i < client.size(); i++)
                {
                    std::cout << i << ") " << client[i].surname << " " << client[i].name << " ";
                }
                std::cout<<std::endl;
                std::cout << "-------------------------------------------"<<std::endl;

                std::cout << "Enter the index of client,which you want to see: ";
                std::cin >> index1;
                client[index1].print();

            }
            break;
            case 3:
            {
                int index2 = 0;
                std::cout << "-------------------------------------------"<<std::endl;
                for (int i = 0; i < client.size(); i++)
                {
                    std::cout << i << ") " << client[i].surname << " " << client[i].name << " ";
                }
                std::cout<<std::endl;
                std::cout << "-------------------------------------------"<<std::endl;
                std::cout<<"Enter the number's index , which you want to delete: ";
                std::cin >> index2;
                client.erase(client.begin()+index2);
            }
            break;
            case 4:
            {

                int index3 = 0;
                std::cout << "-------------------------------------------"<<std::endl;
                for (int i = 0; i < client.size(); i++)
                {
                    std::cout << i << ") " << client[i].surname << " " << client[i].name << " ";
                }
                std::cout<<std::endl;
                std::cout << "-------------------------------------------"<<std::endl;
                std::cout << "Enter the index of client,which you want to see: ";
                std::cin >> index3;
                client[index3].creditCalculation();
            }
            break;
            case 5:
                menu = false;
                break;
        }
        std::cout << "-------------------------------------------"<<std::endl;
    }
    return 0;
}