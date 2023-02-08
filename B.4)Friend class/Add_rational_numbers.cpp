#include <iostream>
using namespace std;
class Rational1;
class Rational2
{
    int num, den;

public:
    void input()
    {
        cout << "Enter the value of numerator and denomenator" << endl;
        cin >> num >> den;
    }
    void display()
    {
        cout << "The rational number is : " << num << "/" << den << endl;
    }
    friend class Rational1;
};
class Rational1
{
    int num, den;

public:
    void input()
    {
        cout << "Enter the value of numerator and denomenator" << endl;
        cin >> num >> den;
    }
    void display()
    {
        cout << "The rational number is : " << num << "/" << den << endl;
    }
    void Add(Rational2 r1)
    {
        Rational1 r;
        r.num = num * r1.den + den * r1.num;
        r.den = den * r1.den;
        r.display();
    }
};

int main()
{
    Rational1 r1;
    Rational2 r2;
    r1.input();
    r2.input();
    r1.display();
    r2.display();
    cout << "After addition" << endl;
    r1.Add(r2);
    return 0;
}