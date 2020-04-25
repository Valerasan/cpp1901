#include <iostream>


void countOut(int count)
{
    if (count > 1 )
        countOut(count - 1);
    std::cout <<"pop "<<count << '\n';

}


int main()
{
    int x = 0;
    std::cout << "Enter the number: ";
    std::cin >> x;
    countOut(x);
    return 0;
}