#include <iostream>
using namespace std;
class Time2;
class Time1
{
    int hr, min;

public:
    void input()
    {
        cout << "Enter time in hours and minutes" << endl;
        cin >> hr >> min;
    }
    void display()
    {
        cout << "The time is " << hr << " hours " << min << " minutes " << endl;
    }
    friend void Add(Time1, Time2);
};
class Time2
{
    int hr, min;

public:
    void input()
    {
        cout << "Enter time in hours and minutes " << endl;
        cin >> hr >> min;
    }
    void display()
    {
        cout << "The time is " << hr << " hours " << min << " minutes " << endl;
    }
    friend void Add(Time1, Time2);
};
void Add(Time1 t1, Time2 t2)
{
    Time1 t3;
    t3.hr = t1.hr + t2.hr;
    t3.min = t1.min + t2.min;
    if (t3.min >= 60)
    {
        t3.hr++;
        t3.min -= 60;
    }
    t3.display();
}
int main()
{
    Time1 t1;
    Time2 t2;
    t1.input();
    t2.input();
    t1.display();
    t2.display();
    cout << "After addition" << endl;
    Add(t1, t2);
    return 0;
}