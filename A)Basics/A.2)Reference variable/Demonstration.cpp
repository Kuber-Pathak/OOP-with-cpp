// reference variable is just a new name for same varaibe.We use it to hide name of original variable
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int &b = a; // defining reference variable
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
    a = a + 10;
    cout << "After adding value on A" << endl;
    cout << "A = " << a << endl;
    cout << "B = " << b;
    return 0;
}