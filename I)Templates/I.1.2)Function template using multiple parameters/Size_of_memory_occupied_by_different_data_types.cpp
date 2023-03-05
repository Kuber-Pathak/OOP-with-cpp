#include <iostream>
using namespace std;
template <class T1, class T2, class T3>
void Size(T1 a, T2 b, T3 c)
{
    cout << "The size of a is " << sizeof(a) << endl;
    cout << "The size of b is " << sizeof(b) << endl;
    cout << "The size of c is " << sizeof(c) << endl;
}
int main()
{
    int a = 5;
    double b = 5.5;
    char c = 'a';
    Size(a, b, c);
    return 0;
}