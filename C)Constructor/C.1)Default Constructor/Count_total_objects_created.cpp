#include <iostream>
using namespace std;
class Count
{
    static int count; // using static variable to initialize 0 initially
public:
    Count()
    {
        count++;
        cout << "Object  " << count << " is created" << endl;
    }
    void display()
    {
        cout << "Total number of object formed is : " << count;
    }
};
int Count::count;
int main()
{
    Count C1, C2, C3, C4;
    C4.display(); // any object can be used since object is just use to satisfy syntax
    return 0;
}
