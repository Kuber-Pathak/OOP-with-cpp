// the function that copies the function code to the place is called is known ad inline function
#include <iostream>
using namespace std;
inline void Add(int a, int b)
{
    cout << "The sum is : " << (a + b) << endl;
}
int main()
{
    int a, b;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
    Add(a, b);
    return 0;
}