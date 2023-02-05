#include <iostream>
using namespace std;
class Height
{
    double ft, inch;

public:
    Height(double a, double b)
    {
        ft = a;
        inch = b;
    }
    void display()
    {
        cout << "The Height is " << ft << " feet " << inch << " inch " << endl;
    }
    operator double()
    {
        return (((inch / 12) + ft) / 3.28084);
    }
};
int main()
{
    Height H(5, 7);
    H.display();
    cout << "After conversion" << endl;
    double m;
    m = H;
    cout << "The height is " << m << " meter " << endl;
    return 0;
}