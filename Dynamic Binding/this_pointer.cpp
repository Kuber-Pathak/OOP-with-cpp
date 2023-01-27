// this operator points the address of calling opertor
#include <iostream>
using namespace std;
class Box
{
    float length, breadth, height;

public:
    Box(float l, float b, float h)
    {
        this->length = l;
        this->breadth = b;
        this->height = h;
    }
    float volume()
    {
        return (this->length * this->breadth * this->height);
    }
    void compare(Box b)
    {
        if (this->volume() > b.volume())
        {
            cout << "Object calling compare function is greater" << endl;
        }
        else
        {
            cout << "object passed as an argument is greater" << endl;
        }
    }
};
int main()
{
    Box B1(10.5, 5.5, 6.5), B2(8.5, 4.6, 6.4);
    cout << "volume for B1=" << B1.volume() << endl;
    cout << "volume for B2=" << B2.volume() << endl;
    cout << "Calling object=B1" << endl
         << "Object passed as an argumet=B2" << endl;
    B1.compare(B2);
    return 0;
}
