#include <iostream>
using namespace std;
class Complex2;
class Complex1
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
    void Add(Complex2);
};
class Complex2
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
    friend void Complex1::Add(Complex2);
};

void Complex1::Add(Complex2 c2)
{
    Complex1 c;
    c.real = real + c2.real;
    c.img = img + c2.img;
    c.display();
}
int main()
{
    Complex1 c1;
    Complex2 c2;
    c1.input();
    c2.input();
    c1.display();
    c2.display();
    cout << "After addition" << endl;
    c1.Add(c2);
    return 0;
}