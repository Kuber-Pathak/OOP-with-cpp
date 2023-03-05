#include <iostream>
using namespace std;
class Area
{
    float r, l, b;

public:
    void Calculate(int l, int b)
    {
        cout << "The area of rectangle is " << l * b << endl;
    }
    void Calculate(int r)
    {
        cout << "The area of cirlce is " << 3.1415 * r * r << endl;
    }
};
int main()
{
    Area A;
    int l, b, r;
    cout << "Enter the radius of circle:" << endl;
    cin >> r;
    cout << "Enter the length and breadth of rectangle:" << endl;
    cin >> l >> b;
    A.Calculate(l, b);
    A.Calculate(r);
    return 0;
}