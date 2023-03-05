// function perfoming multiple task using dynamic binding with same name
#include <iostream>
using namespace std;
class Polygon
{
protected:
    float width, height;

public:
    void setdata(float w, float h)
    {
        width = w;
        height = h;
    }
    virtual float area()
    {
        return 0;
    }
};
class Rectangle : public Polygon
{
public:
    float area()
    {
        return (width * height);
    }
};
class Triangle : public Polygon
{
public:
    float area()
    {
        return ((width * height) / 2);
    }
};
int main()
{
    Polygon *P1, *P2;
    P1 = new Rectangle();
    P2 = new Triangle();
    P1->setdata(5.5, 9.25);
    P2->setdata(7.5, 5.5);
    cout << "Area of rectangle=" << P1->area() << endl;
    cout << "Area of triangle=" << P2->area() << endl;
    return 0;
}