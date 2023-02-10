#include <iostream>
using namespace std;
class Complex
{
    int real, img;

public:
    void input()
    {
        cout << "Enter the real and imaginary value" << endl;
        cin >> real >> img;
    }
    void display()
    {
        cout << "The Complex number is : " << real << "+i" << img << endl;
    }
    friend Complex Multiply(Complex, Complex);
};
Complex Multiply(Complex c1, Complex c2)
{
    Complex c;
    c.real = c1.real * c2.real - c1.img * c2.img;
    c.img = c1.real * c2.img + c1.img * c2.real;
    return c;
}
int main()
{
    Complex c2, c1, c3;
    c1.input();
    c2.input();
    c1.display();
    c2.display();
    cout << "After Multiplication" << endl;
    c3 = Multiply(c1, c2);
    c3.display();
    return 0;
}