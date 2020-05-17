#include <iostream>

int substruct(int a , int b)
{
    return a-b;
}

int substruct(int a , int b , int c)
{
    return a-b-c;
}

int sum(int a , int b=7 , int c=2 )
{
    return a + b + c  ;
}


double substruct(double a , double b)
{
    return a-b;
}



// int substructInteger(int a , int b)
// {
//     return a-b;
// }

// double substructDouble(double a , double b)
// {
//     return a-b;
// }


int main()
{
    std::cout << substruct(3 , 6) << '\n';
    std::cout << substruct(3.4 , 2.4) << '\n';
    std::cout << substruct(3 , 6 , 7) << '\n';
    std::cout << sum(3) << '\n';
    std::cout << sum(3 , 5) << '\n';


    return 0;
}