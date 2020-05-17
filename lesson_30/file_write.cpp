#include <iostream>
#include <fstream>
#include <cstdlib>


int main()
{
    std::ofstream outfile("FileName.txt");

    if (!outfile)
    {
        std::cerr << "FileName.txt could not be opend for writing" << std::endl;
        exit(1);
    }


    std::cout << "line 1 ........" << std::endl;
    outfile <<"Line 1 ..... " << std::endl;
    outfile <<"Line 2 ..... " << std::endl;

    // std::ofstream file;
    // file.open("file");
    // if (file.is_open())
    // {
    //     file <<"Some text here... " std::endl;
    //     file.close();
    // } else cout << "unable to open file;"

    return 0;
}