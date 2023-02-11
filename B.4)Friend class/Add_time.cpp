#include <iostream>
using namespace std;
class Time2;
class Time1
{
    int hr, min;

public:
    Time1()
    {
        hr = 2;
        min = 5;
    }
    void display()
    {
        cout << "the time is " << hr << "Hr" << min << "min" << endl;
    }
    friend class Time2;
};
class Time2
{
    int hr, min;

public:
    Time2()
    {
        hr = 2;
        min = 5;
    }
    void display()
    {
        cout << "The time is " << hr << " Hr " << min << " Min " << endl;
    }
    void add(Time1 t1)
    {
        Time2 t3;
        t3.hr = t1.hr + hr;
        t3.min = t1.min + min;
        if (t3.min >= 60)
        {
            t3.hr++;
            t3.min -= 60;
        }
        t3.display();
    }
};
int main()
{
    Time1 t1;
    Time2 t2;
    t1.display();
    t2.display();
    cout << "After addition" << endl;
    t2.add(t1);
    return 0;
}