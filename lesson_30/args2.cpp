#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>

int main(int argc, char *argv[])
{
    if (argc <= 1)
    {
        if (argv[0])
            std::cout << "Using: " << argv[0] << " <number> \n";
        else
            std::cout << "Using: <program name> <number> \n";

        exit (1);
    }

    std::stringstream convert(argv[1]);

    int number;
    if(!(convert >> number))
        number = 0;

    std::cout << "Got integer: " << number << '\n';


    return 0;
}

// C-style convertation
//number = ato(argv[1]);
// atof = float ....


/*


~/cpp19.01/lesson_30/ (master) $ ./args2 12 Valera some 
Got integer: 12
~/cpp19.01/lesson_30/ (master) $ ./args2 Valera 
Got integer: 0
~/cpp19.01/lesson_30/ (master) $ 


/*