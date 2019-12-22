#include <iostream>
#include <sstream>
using namespace std;





int main()
{
   cout<<"The 42 in oct:"<<oct<<42<<'\n'
       <<"The 42 in dec:"<<dec<<42<<'\n'
       <<"The 42 in hex:"<<hex<<42<<'\n';

    int n;
    istringstream("2A")>>hex>>n;
    cout<<dec<<"parsinf\"2A\" as hex gives "<<n <<'\n';

    cout<<hex<<"42 as hex gives "<< 42
        <<" and 21 as hex gives "<< 21 <<'\n';

    return 0;
}