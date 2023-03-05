#include <iostream>
using namespace std;
template <class t>
class Rational
{
    t num, den;

public:
    Rational()
    {
    }
    Rational(t a, t b)
    {
        num = a;
        den = b;
    }
    void display()
    {
        cout << "The rational number is " << num << "/" << den << endl;
    }
    void operator+(Rational r1)
    {
        Rational R;
        R.num = (r1.num * den) + (num * r1.den);
        R.den = (r1.den * den);
        R.display();
    }
};
int main()
{
    Rational<int> R1(5, 2), R2(7, 3);
    Rational<float> R3(5.5, 2.5), R4(7.5, 3.5);
    cout << "For integer value" << endl;
    R1.display();
    R2.display();
    cout << " After Operation" << endl;
    R1 + R2;
    cout << "For Decimal value" << endl;
    R3.display();
    R4.display();
    cout << " After Operation" << endl;
    R3 + R4;
    return 0;
}
