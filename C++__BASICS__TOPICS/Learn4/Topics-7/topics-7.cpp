/*
Topics
1.Global variable and local variable
2.Different of float and long double and double (Literals)
3.Reference variable
4.TypeCasting
*/

#include <iostream>
using namespace std;
int c = 4;
int main()
{
    // int a, b, c;
    // cout << "Enter the value of a: " << endl;
    // cin >> a;
    // cout << "Enter the value of b: " << endl;
    // cin >> b;
    // c = a + b;
    // cout << "The sum is c :" << c << endl;
    // cout << "The global is c :" << ::c << endl;

    // float d = 34.4f;       //(float)(34.40000153F)
    // long double e = 34.4l; //(long double)(34.399999999999999L)
    // cout << "The Size of 34.4  is = " << sizeof(34.4)  << endl; // double
    // cout << "The Size of 34.4f is = " << sizeof(34.4f) << endl; //float
    // cout << "The Size of 34.4F is = " << sizeof(34.4F) << endl; //float
    // cout << "The Size of 34.4l is = " << sizeof(34.4l) << endl; // long double
    // cout << "The Size of 34.4L is = " << sizeof(34.4L) << endl; // long double
    // cout << "the value of e is  " << d << endl
    //      << "The value of e is " << e << endl;

    /* *********************** Reference variable *************************** */

    // float x = 455;
    // cout << x << endl;
    // float &y = x;
    // cout << "y = " << y << endl;

    /* *********************** Typecasting *************************** */
    // int v = 45;
    // float y = 45.46;
    // cout << "v is =" << (float)v << endl;
    // cout << "y is =" << (int)y << endl;

    // cout << "The expression is ( v + y ) = " << (v + y) << endl;
    // cout << "The expression is  v + int(y) = " << v + int(y) << endl;
    // cout << "The expression is  v + (int)y = " << v + (int)y << endl;

    // OUTPUT
    // The expression is ( v + y ) = 90.46
    // The expression is  v + int(y) = 90
    // The expression is  v + (int)y = 90
    float a = 44.3;
    long double b = 44.3l;

    cout << "A " << a << endl
         << "B " << b << endl;
    cout << "size of A " << sizeof(a) << endl;
    cout << "size of B " << sizeof(b) << endl;

    return 0;
}