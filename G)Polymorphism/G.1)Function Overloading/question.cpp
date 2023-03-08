// WAP to compute distance of 2 cities from specific location by using function overloading and the distance in ft and inches.
#include <iostream>
using namespace std;
void compute(int ft1, int inch1, int ft2, int inch2)
{
    int distance1 = ft1 + inch1 / 12;
    int distance2 = ft2 + inch2 / 12;
    if (distance1 > distance2)
    {
        cout << "City 1 is farther than city 2 from specific location" << endl;
    }
    else
    {
        cout << "City 2 is farther than city 1 from specific location" << endl;
    }
}
void compute(float ft3, float ft4)
{
    if (ft3 > ft4)
    {
        cout << "City 1 is farther than city 2 from specific location" << endl;
    }
    else
    {
        cout << "City 2 is farther than city 1 from specific location" << endl;
    }
}
int main()
{
    int ft1, inch1, ft2, inch2;
    float ft3, ft4;
    cout << "Enter the distace of city 1 from specific location in integer" << endl;
    cin >> ft1 >> inch1;
    cout << "Enter the distace of city 2 from specific location in integer" << endl;
    cin >> ft2 >> inch2;
    compute(ft1, inch1, ft2, inch2);
    cout << "Enter the distace of city 1 from specific location in float" << endl;
    cin >> ft3;
    cout << "Enter the distace of city 2 from specific location in float" << endl;
    cin >> ft4;
    compute(ft3, ft4);
    return 0;
}