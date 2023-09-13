#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // const int a = 34;
    // cout<<"The value of A was: "<<a<<endl;
    // // a = 45;
    // cout<<"the value of a is: "<<a<<endl;
    // ================== Manipulators on c++ setw ====================
    // int a = 3, b = 32, c = 323;
    // cout<<"the value of a is: "<<a<<endl;
    // cout<<"the value of a is: "<<b<<endl;
    // cout<<"the value of a is: "<<c<<endl;

    // cout<<"the value of a is: "<<setw(4)<<a<<endl;
    // cout<<"the value of a is: "<<setw(4)<<b<<endl;
    // cout<<"the value of a is: "<<setw(4)<<c<<endl;

    // Operators precedence
    int a = 3, b = 4;
    // int c = 5 * a + b;
    // int c = (a * 5) + b; // thats the right way to doing math terms programming.
    int c = ((((a * 5) + b) + 29) - 30) + 40; // in this case they not fellow precedence ,they fellow associativity .
    cout << "the answer of c is :" << c << endl;
    return 0;
}
