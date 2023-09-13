#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter the value of num1:\n"; /*<< is called Insertion operation { provide all output } */
    cin >> num1;                          /*>> is called Extraction operator { take all input } */
    cout << "Enter the value of num2:\n"; /*<< is called Insertion operation { provide all output } */
    cin >> num2;                          /*>> is called Extraction operator { take all input } */
    cout << "sum num1 + num2 : " << num1 + num2;
    return 0;
}
 