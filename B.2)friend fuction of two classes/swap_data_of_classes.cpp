#include <iostream>
using namespace std;
class B;
class A
{
    int a;

public:
    void input()
    {
        cout << "Eneter value of a : " << endl;
        cin >> a;
    }
    void display()
    {
        cout << "Value of a = " << a << endl;
    }
    void swap(B, A);
};

class B
{
    int b;

public:
    void input()
    {
        cout << "Eneter value of b : " << endl;
        cin >> b;
    }
    void display()
    {
        cout << "Value of b = " << b << endl;
    }
    friend class A;
};
void A::swap(B b1, A a1)
{
    int t;
    t = a1.a;
    a1.a = b1.b;
    b1.b = t;
}

int main()
{
    A a1;
    B b1;
    a1.input();
    b1.input();
    a1.swap(b1, a1);
    a1.display();
    b1.display();
    return 0;
}
