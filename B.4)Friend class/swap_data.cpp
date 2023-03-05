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
    void swap(B);
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
void A::swap(B b1)
{
    int temp;
    temp = a;
    a = b1.b;
    b1.b = temp;
    cout << " A = " << a << endl;
    cout << "B = " << b1.b << endl;
}
int main()
{
    A a1;
    B b1;
    a1.input();
    b1.input();
    a1.display();
    b1.display();
    a1.swap(b1);
    cout << "after swap" << endl;
    return 0;
}