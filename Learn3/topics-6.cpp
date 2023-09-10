// THERE are to type of headers files:
// 1. System headers file : It comes with compiler.
// User defined headers file : It is written by the programmer
// #include "this.h" This will produce an error if this.h is no present in current directory

#include <iostream>
using namespace std;
int main()
{
    int a = 1, b = 5;
    cout << "hello world is my program" << endl;
    cout << "operators in c++" << endl;
    cout << "a+b = " << a + b << endl;
    cout << "a-b = " << a - b << endl;
    cout << "a*b = " << a * b << endl;
    cout << "a/b = " << a / b << endl;
    cout << "a%b = " << a % b << endl;
    cout << "a++ = " << a++ << endl;
    cout << "++a = " << ++a << endl;
    cout << "a-- = " << a-- << endl;
    cout << "--a = " << --a << endl;

    // Assignment Operators --> use to assign to values  to variable
    // int a = 3, b = 9;
    // char d = 'd';

    // Comparision Operators
    cout << "The value a == b is " << (a == b) << endl;
    cout << "The value a != b is " << (a != b) << endl;
    cout << "The value a > b is " << (a > b) << endl;
    cout << "The value a < b is " << (a < b) << endl;
    cout << "The value a >= b is " << (a >= b) << endl;
    cout << "The value a <= b is " << (a <= b) << endl;


     // Logical Comparision Operators
    cout << "The value ((a == b) && (a + b)) is " << ((a == b) && (a + b)) << endl;
    cout << "The value ((a == b) or (a + b)) is " << ((a == b) || (a + b)) << endl;
    return 0;
}
