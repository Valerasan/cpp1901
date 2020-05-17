#include <iostream>
#include <fstream>
#include <cstdlib>


/*

* app - open file in regtime add to file
* ate - go to end in file read/write
* binary - open file in bin
* in - open file for read (default at ifstream)
* out - open file for write (default at ifstream)
* trunc - delete file if it exist 


*/
















int main()
{
    std::ifstream infile("FileName.txt", std::ios::binary);

    if (!infile)
    {
        std::cerr << "FileName.txt could not be opend for reading" << std::endl;
        exit(1);
    }


    while(infile)
    {
        std::string strInput;
        // infile >> strInput;
        getline(infile , strInput);

        std::cout <<strInput << std::endl;
    }

///////////////////
    // std::ofstream file;
    // file.open("file");
    // if (file.is_open())
    // {
    //     file <<"Some text here... " <<endl;
    //     file.close();
    // } else cout << "unable to open file;"

    return 0;
}