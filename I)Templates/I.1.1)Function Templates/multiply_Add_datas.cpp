#include <iostream>
using namespace std;
template <class T>
void Calculate(T a, T b)
{
    cout << "Multiplication = " << (a * b) << endl;
    cout << "Addition = " << (a + b) << endl;
}
int main()
{
    int a = 4, b = 5;
    float c = 2.5, d = 3.5;
    cout << "For integer value" << endl;
    Calculate(a, b);
    cout << "For Decimal value" << endl;
    Calculate(c, d);
    return 0;
}