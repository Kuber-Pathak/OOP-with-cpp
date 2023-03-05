#include <iostream>
using namespace std;
template <class T1, class T2>
class Distance
{
    T1 ft;
    T2 inch;

public:
    Distance() {}
    Distance(T1 a, T2 b)
    {
        ft = a;
        inch = b;
    }
    void dispaly()
    {
        cout << "The distance is " << ft << " feet " << inch << " inch " << endl;
    }
    void Add(Distance d1, Distance d2)
    {
        Distance D;
        D.ft = d1.ft + d2.ft;
        D.inch = d1.inch + d2.inch;
        if (D.inch > 12)
        {
            D.ft++;
            D.inch -= 12;
        }
        D.dispaly();
    }
};
int main()
{
    Distance<int, float> D1(5, 9.5), D2(6, 8.2);
    D1.dispaly();
    D2.dispaly();
    cout << "After addition" << endl;
    D1.Add(D1, D2);
    return 0;
}