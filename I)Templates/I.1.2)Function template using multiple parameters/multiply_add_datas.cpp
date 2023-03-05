#include <iostream>
using namespace std;
template <class T1, class T2>
void Calculate(T1 a, T2 b)
{
    cout << "Multiplication = " << (a * b) << endl;
    cout << "Addition = " << (a + b) << endl;
}
int main()
{
    int a = 4;
    float b = 2.5;
    Calculate(a, b);
    return 0;
}