#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // const int a = 34;
    // cout<<"The value of A was: "<<a<<endl;
    // // a = 45;
    // cout<<"the value of a is: "<<a<<endl;

    int a = 3, b = 32, c = 3232;
    cout<<"the value of a is: "<<a<<endl;
    cout<<"the value of a is: "<<b<<endl;
    cout<<"the value of a is: "<<c<<endl;

    cout<<"the value of a is: "<<setw(4)<<a<<endl;
    cout<<"the value of a is: "<<setw(4)<<b<<endl;
    cout<<"the value of a is: "<<setw(4)<<c<<endl;
    return 0;
}
