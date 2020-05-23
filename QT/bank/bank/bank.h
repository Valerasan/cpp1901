#ifndef BANK_H
#define BANK_H
#include <vector>
#include "client.h"

class Bank
{
public:
    Bank();

    void bank_menu(std::vector<Client> &myVec);

    void addClient(std::vector<Client> &myVec);

    void addObject(std::vector<Client> &myVec);

    void print(std::vector<Client> &myVec);

    void delete_item(std::vector<Client> &myVec);

    void creditNumber(std::vector<Client> &myVec);

};

#endif // BANK_H
