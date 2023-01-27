#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "Constructor Base class created" << endl;
    }
    virtual ~Base()
    {
        cout << "Base class destroyed created" << endl;
    }
};
class Derived : public Base
{
public:
    Derived()
    {
        cout << "Constructor Derived class" << endl;
    }
    virtual ~Derived()
    {
        cout << "Derived class destroyed" << endl;
    }
};
int main()
{

    Base *b;
    b = new Derived();
    delete b;
}