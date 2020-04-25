#include <iostream>

void countOut(int a , int b)
{
    if (a < b)
    {
        countOut(a  , b - 1);
        std::cout <<"pop "<< b << '\n';
    }
    else if (a > b)
    {

        countOut(a + 1  , b);
        std::cout <<"pop "<< a << '\n';
    }

}

int main()
{
    countOut(10 , 20);
    return 0;
}