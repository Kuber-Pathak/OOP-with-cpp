// Static data member is the varibale which is initialized 0 automatically
// It is created when first object of class us created
// ALl the objects share the Static data member
// The function that can only acess the static data member is called static member function
#include <iostream>
using namespace std;
class Sample
{
    static int c;
    int a;

public:
    void Count()
    {
        c++;
        a = c;
    }
    static void displayC()
    {
        cout << "C = " << c << endl;
    }
    void displayA()
    {
        cout << "A = " << a << endl;
    }
};
int Sample::c;
int main()
{
    Sample s1, s2;
    s1.Count();
    s1.displayA();
    Sample::displayC();
    s2.Count();
    s2.displayA();
    Sample::displayC();
    return 0;
}