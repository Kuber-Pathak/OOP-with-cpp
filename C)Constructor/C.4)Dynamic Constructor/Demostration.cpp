#include <iostream>
#include <string.h>
using namespace std;
class Sample
{
    char *n;

public:
    Sample() // dynamic constructor
    {
        n = new char[20]; // dynamic memory allocation
        strcpy(n, "Bill Gates");
    }
    void Display()
    {
        cout << "After initialization " << endl
             << "The name is " << n;
    }
};
int main()
{
    Sample s;
    s.Display();
    return 0;
}