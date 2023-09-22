#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int *b = &a; // 0x61ff08 address
    // & ---> Address of operator
    cout << "The Address of a :" << &a << endl;
    cout << "The Address of a :" << b << endl;

    // * ---> Dereference operator
    cout << "The value at Address b :" << *b << endl;

    return 0;
};