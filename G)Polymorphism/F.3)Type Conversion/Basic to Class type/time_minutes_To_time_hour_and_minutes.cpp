
#include <iostream>
using namespace std;
class Time
{
    int hours, min;

public:
    Time() {}
    Time(int m)
    {
        hours = m / 60;
        min = m % 60;
    }
    void display()
    {
        cout << "Time : " << hours << " hours and " << min << " minutes" << endl;
    }
};
int main()
{
    Time T = 125;
    cout << "Time : 125 minutes" << endl;
    cout << "After Conversion " << endl;
    T.display();
    return 0;
}