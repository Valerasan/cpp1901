#include <iostream>
using namespace std;

int returnInt(){
    return 8;
    cout << "after returnInt"<<endl;



}

int main(void){
    cout <<"start main()"<<endl;
    //1
    //cout<< returnInt()<<endl;
    // int a = 8
    // returnInt()

    //2
    int x = returnInt();
    cout<<x<<endl;
    cout<<"end main()"<<endl;

    return 0;
    cout << "after return"<<endl;
}