#include <iostream>
using namespace std;
class Engine
{
    int model;

public:
    Engine(int m)
    {
        model = m;
    }
    void start()
    {
        cout << "Engine wth model number " << model << " is starting." << endl;
    }
};
class Car
{
    Engine e;

public:
    Car() : e(123)
    {
    }
    void start()
    {
        e.start();
    }
};
int main()
{
    Car c;
    c.start();
    return 0;
}