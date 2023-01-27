#include <iostream>
using namespace std;
class Base
{
public:
    void virtual show()
    {
        cout << "base class" << endl;
    }
};
class Derived : public Base
{
public:
    void show()
    {
        cout << "derived class" << endl;
    }
};
int main()
{
    Base *b;
    b = new Derived();
    b->show();
    return 0;
}