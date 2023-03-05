// it states that ,it is possible to substitue object of derived class for object of base class,
// if derived class is subtype of base class.
// to be a subtype derived class must preserve all the operation of base class
#include <iostream>
using namespace std;
class Derived;
class Base
{
protected:
    int x, y, sum;

public:
    Base(int a, int b)
    {
        x = a;
        y = b;
        cout << "x=" << x << endl
             << "y=" << y << endl;
    }
    friend void Display(Derived);
};
class Derived : public Base
{
public:
    Derived(int a, int b) : Base(a, b)  
    {
    }
    void add()
    {
        sum = x + y;
    }
};
void Display(Derived d)
{
    cout << "The sum is : " << d.sum << endl;
}
int main()
{
    Derived D(5, 5);
    D.add();
    Display(D);    //using principle of substitutability
    return 0;
}