#include <iostream>
using namespace std;
template <class T1, class T2>
class Time
{
    T1 hr;
    T2 min;

public:
    Time() {}
    Time(T1 a, T2 b)
    {
        hr = a;
        min = b;
    }
    void dispaly()
    {
        cout << "The Time is " << hr << " hour " << min << " minute " << endl;
    }
    void Add(Time d1, Time d2)
    {
        Time D;
        D.hr = d1.hr + d2.hr;
        D.min = d1.min + d2.min;
        if (D.min > 60)
        {
            D.hr++;
            D.min -= 60;
        }
        D.dispaly();
    }
};
int main()
{
    Time<int, float> D1(5, 9.5), D2(6, 8.2);
    D1.dispaly();
    D2.dispaly();
    cout << "After addition" << endl;
    D1.Add(D1, D2);
    return 0;
}