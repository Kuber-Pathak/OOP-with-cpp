#include <iostream>
using namespace std;
class Bcompare; // forward declaration
class Acompare
{
    int a;

public:
    void input()
    {
        cout << "Enter value of a" << endl;
        cin >> a;
    }
    void display()
    {
        cout << "A = " << a << endl;
    }
    friend void Compare(Acompare, Bcompare);
};
class Bcompare
{
    int b;

public:
    void input()
    {
        cout << "Enter value of b" << endl;
        cin >> b;
    }
    void display()
    {
        cout << "B = " << b << endl;
    }
    friend void Compare(Acompare, Bcompare);
};
void Compare(Acompare A, Bcompare B)
{
    if (A.a > B.b)
        cout << A.a << " is maximum" << endl;
    else
        cout << B.b << " is maximum" << endl;
}
int main()
{
    Acompare A;
    Bcompare B;
    A.input();
    B.input();
    A.display();
    B.display();
    Compare(A, B);
    return 0;
}