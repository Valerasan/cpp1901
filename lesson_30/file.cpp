#include <iostream>
#include <fstream>
#include <cstdlib>


int main()
{
    std::ofstream outfile("SomeText.txt" , std::ios::in | std::ios::outсвcd                );

    if (!outfile)
    {
        std::cerr << "FileName.txt could not be opend for writing/reading!" << std::endl;
        exit(1);
    }


    return 0;
}