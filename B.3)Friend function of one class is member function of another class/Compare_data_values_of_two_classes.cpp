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
    void Compare(Bcompare);
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
    friend void Acompare::Compare(Bcompare);
};
void Acompare::Compare(Bcompare B)
{
    if (a > B.b)
        cout << a << " is maximum" << endl;
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
    A.Compare(B);
    return 0;
}