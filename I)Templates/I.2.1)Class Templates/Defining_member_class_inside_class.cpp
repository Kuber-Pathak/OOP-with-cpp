#include <iostream>
using namespace std;
template <class t>
class Temp
{
    t a;

public:
    void input()
    {
        cout << "Ente value of a" << endl;
        cin >> a;
    }
    void display()
    {
        cout << "The value of a=" << a << endl;
    }
};

int main()
{
    Temp<int> t;
    Temp<float> t1;
    cout << "For Integer value" << endl;
    t.input();
    t.display();
    cout << "For Decimal value" << endl;
    t1.input();
    t1.display();
    return 0;
}