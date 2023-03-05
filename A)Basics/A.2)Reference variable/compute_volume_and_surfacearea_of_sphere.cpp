#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;
void computeSurface(float &v, float &s, float r)
{
    v = (4 / 3.0) * M_PI * r * r * r;
    s = 4 * M_PI * r * r;
}

int main()
{
    float v, s;
    computeSurface(v, s, 5);
    cout << "The volume is " << v << endl;
    cout << "The Surface area is " << s << endl;
    return 0;
}