#include <iostream>
using namespace std;
class Area
{
  float a, r;

public:
  void input()
  {
    cout << "Enter radius :" << endl;
    cin >> r;
  }
  void display(float a)
  {
    cout << "the area of cicle is " << a << endl;
  }
  float calculate()
  {
    return 3.14 * r * r;
  }
};
int main()
{
  Area A;
  A.input();
  float c = A.calculate();
  A.display(c);
  return 0;
}
