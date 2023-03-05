// Destination(R)=Source(p)
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
};
class Polar
{
    double angle, radius;

public:
    Polar(double r, double a)
    {
        radius = r;
        angle = a;
    }
    void display()
    {
        cout << "The polar components are:" << endl
             << "Radius = " << radius << endl
             << "Angle = " << angle << endl;
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
    Polar P(10.0, 0.785398);
    Rectangle R;
    P.display();
    R = P;
    cout << "After operation" << endl;
    R.display();
    return 0;
}