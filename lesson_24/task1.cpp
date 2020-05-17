#include <iostream>
#include <vector>
void printSize(const std::vector<auto> &myVec);
void summ(const std::vector<auto> &myVec);
void enterFromUser(std::vector<auto> &myVec);

int main()
{

    std::vector<int> vec;
    for (int i = 0 ; i<10 ;i++ )
        vec.push_back(i*3);

    for (auto const &element : vec)
        std::cout<< element<<' ';



    std::cout<<std::endl;
    printSize(vec);
    summ(vec);
    enterFromUser(vec);

    for (auto const &element : vec)
        std::cout<< element<<' ';

    std::cout<<std::endl;


    return 0;
}


void printSize(const std::vector<auto> &myVec)
{
    std::cout<<"Vector length = "<<myVec.size()<<std::endl;
}

void summ(const std::vector<auto> &myVec)
{
    int summ = 0;
    for (auto const &element : myVec)
        summ +=element;
    std::cout<<summ<<std::endl;
}

void enterFromUser(std::vector<auto> &myVec)
{
    auto tmp = 0;
    std::cout<<"Enter the number: ";
    std::cin>>tmp;
    myVec.push_back(tmp);
}