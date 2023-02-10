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
    Polar()
    {
    }
    Polar(double r, double a)
    {
        radius = r;
        angle = a;
    }
    Polar(Rectangle R)
    {
        float x = R.A();
        float y = R.B();
        radius = sqrt(pow(x, 2) + pow(y, 2));
        angle = atan(y / x);
    }
    void display()
    {
        cout << "The polar components are:"
             << "(" << radius << "," << angle << ")" << endl;
    }
    operator Rectangle()
    {
        float x = radius * cos(angle);
        float y = radius * sin(angle);
        return Rectangle(x, y);
    }
};
int main()
{
    cout << "For polar to rectangular conversion " << endl;
    Polar P1(10.0, 0.785398);
    Rectangle R1;
    P1.display();
    R1 = P1;
    cout << "After operation" << endl;
    R1.display();
    cout << "For rectangle to polar convesion" << endl;
    Polar P2;
    Rectangle R2(7.07107, 7.07107);
    R2.display();
    P2 = R2;
    cout << "After operation" << endl;
    P2.display();
    return 0;
}