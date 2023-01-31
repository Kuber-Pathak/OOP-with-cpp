#include <iostream>
using namespace std;
class B;
class A
{
    int a;

public:
    void input()
    {
        cout << "enter the value of a" << endl;
        cin >> a;
    }
    void display()
    {
        cout << " A = " << a << endl;
    }
    void max(B);
};
class B
{
    int b;

public:
    void input()
    {
        cout << "enter the value of b" << endl;
        cin >> b;
    }
    void display()
    {
        cout << "B = " << b << endl;
    }
    friend A;
};
void A::max(B b1)
{
    if (a > b1.b)
        cout << a << " is maximum" << endl;
    else
        cout << b1.b << " is maximum" << endl;
}
int main()
{
    A a1;
    B b1;
    a1.input();
    b1.input();
    a1.display();
    b1.display();
    a1.max(b1);
}
