#include <iostream>
using namespace std;
template <class T>
T Add(T a, T b)
{
    return (a + b);
}
int main()
{
    int a = 2, b = 3;
    float c = 3.5, d = 7.25;
    cout << "Addition of two Integers:" << Add(a, b) << endl;
    cout << "Addition of two Decimals:" << Add(c, d) << endl;
    return 0;
}