#include <iostream>
using namespace std;
class Sample
{
    int a, b;

public:
    Sample(int x, int y)
    {
        a = x;
        b = y;
    }
    Sample(Sample &s)
    {
        a = s.a;
        b = s.b;
    }
    void Dispaly()
    {
        cout << "A = " << a << endl
             << "B = " << b << endl;
    }
};
int main()
{
    Sample s1(5, 6), s2(7, 8);
    Sample s3(s1);
    cout << "for first object" << endl;
    s1.Dispaly();
    cout << "for second object" << endl;
    s2.Dispaly();
    cout << "For third object after using copy constructor" << endl;
    s3.Dispaly();
    return 0;
}