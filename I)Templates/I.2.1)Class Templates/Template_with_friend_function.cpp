/*Program To multiply two scaler vector coordinates*/
#include <iostream>
using namespace std;
template <class T>class Vector;
template <class T>int operator* (const Vector<T>&, const Vector<T>&);
template <class T>
class Vector
{
T a, b;

public:
Vector(T x, T y)
{
a = x;
b = y;
}
void display()
{
cout << "(" << a << "," << b << ")" << endl;
}
friend int operator* <T>(const Vector<T>&, const Vector<T>&);
};
template <class T>
int operator*(const Vector<T>& v1,const Vector<T>& v2)
{
int product = v1.a * v2.a + v1.b * v2.b;
return product;
}
int main()
{
Vector<int> v1(1, 2), v2(2, 3);
v1.display();
v2.display();
cout << "After multiplication" << endl;
int p = v1 * v2;
cout << "The product is " << p;
return 0;
}