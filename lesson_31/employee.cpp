#include <iostream>
#include <string>


class Employee
{
public:
    std::string m_name;
    int m_id;
    double m_wage;

    void print()
    {
        std::cout << "Name: " << m_name <<
                    "\nID: "  << m_id <<
                    "\nWage: $" << m_wage <<std::endl;
    }

    void setName(std::string  name)
    {
        m_name = name;
    }

    void setId(int id)
    {
        m_id = id
    }


};








int main()
{
    Employee john {"John", 5, 20.00};
    Employee ivan {"Ivan", 7, 70.00};

    john.print();
    std::cout << "========================" <<std::endl;
    ivan.print();


    return 0;
}