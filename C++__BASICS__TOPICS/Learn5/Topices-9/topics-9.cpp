#include <iostream>
using namespace std;
int main()
{
    // selection control structure: if else if else ladder
    int age;
    cin >> age;
    // if (age < 9)
    // {
    //     cout << "you are under age : " << endl;
    // }
    // else if (age < 1)
    // {
    //     cout << "you are now so little " << endl;
    // }
    // else if (age > 10 && age < 19)
    // {
    //     cout << "i thinking about you" << endl;
    // }
    // else
    // {
    //     cout << "ohh you are come to out " << endl;
    // }

    // selection control structure : switch case statements
    string oi = "you ";
    string al = "allowed";
    string nal = "not allowed";
    switch (age)
    {
    case 18:
        cout << "hey bro " << oi + al << endl;
        break;
    case 17:
        cout << "hey bro " << oi + nal << endl;
        break;
    default:
        cout << "sorry bro its close" << endl;
        break;
    }
    return 0;
}