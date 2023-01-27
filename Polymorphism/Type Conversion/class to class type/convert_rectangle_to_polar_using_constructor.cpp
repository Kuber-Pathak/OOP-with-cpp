// Destination(P)=Source(R)
// if u want to use constructor we define it in Destination class
// if u want to use casting operator define it in source class
// However define the class where u are converting at 2nd
#include <iostream>
#include <math.h>
using namespace std;
class Rectangle
{
    float x_co, y_co;

public:
    Rectangle()
    {
    }
    Rectangle(float x, float y)
    {
        x_co = x;
        y_co = y;
    }
    void display()
    {
        cout << "The Recatngleular components are (" << x_co << "," << y_co << ")" << endl;
    }
    float A()
    {
        return x_co;
    }
    float B()
    {
        return y_co;
    }
};
class Polar
{
    double angle, radius;

public:
    Polar() {}
    Polar(Rectangle R)
    {
        float x = R.A();
        float y = R.B();
        radius = sqrt(pow(x, 2) + pow(y, 2));
        angle = atan(y / x);
    }
    void display()
    {
        cout << "The polar components are:" << endl
             << "Radius = " << radius << endl
             << "Angle = " << angle << endl;
    }
};
int main()
{
    Polar P;
    Rectangle R(7.07107, 7.07107);
    R.display();
    P = R;
    cout << "After operation" << endl;
    P.display();
    return 0;
}