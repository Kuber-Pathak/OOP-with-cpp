#include <iostream>
using namespace std;
class B; // forward declaration
class A
{
    int x;

public:
    void input()
    {
        cout << "Enter value of X" << endl;
        cin >> x;
    }
    void display()
    {
        cout << "X = " << x << endl;
    }
    void Swap(B);
};
class B
{
    int y;

public:
    void input()
    {
        cout << "Enter value of Y" << endl;
        cin >> y;
    }
    void display()
    {
        cout << "Y = " << y << endl;
    }
    friend void A::Swap(B);
};
void A::Swap(B b1)
{
    int temp;
    temp = x;
    x = b1.y;
    b1.y = temp;
    display();
    b1.display();
}
int main()
{
    A A1;
    B B1;
    A1.input();
    B1.input();
    A1.display();
    B1.display();
    cout << "After swapping" << endl;
    A1.Swap(B1);
    return 0;
}