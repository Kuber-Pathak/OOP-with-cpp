#include <iostream>
using namespace std;
class Time
{
    int hr, min;

public:
    Time(int a, int b)
    {
        hr = a;
        min = b;
    }
    void display()
    {
        cout << "Time : " << hr << " hours and " << min << " minutes" << endl;
    }
    operator int()
    {
        return ((hr * 60) + min);
    }
};
int main()
{
    Time t(6, 3);
    t.display();
    cout << "After conversion" << endl;
    int m = t;
    cout << "Time : " << m << " minutes" << endl;
    return 0;
}