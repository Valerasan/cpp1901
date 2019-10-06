#include <iostream>
#include <string>

using namespace std;


int main(){
    int x = 3;
    int y = 5;
    cout << x+y << endl;

    string a = "Hello, ";
    string b = "Valera";

    cout << a+b << endl;
    cout << a << b << endl;

    bool t = 0;  //true
    bool f = 0;  // false
    bool ft1 = true;
    bool ft2 = false;
    // cout << "Enter 0 or 1:";
    // cin >> t;
    // cout << "Enter 0 or 1:";
    // cin >> f;
    cout << boolalpha << ft1 << " " << ft2 << endl;
    cout << f << " " << t <<endl;




    return 0;

}