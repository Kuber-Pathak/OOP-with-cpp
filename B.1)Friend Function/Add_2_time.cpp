#include <iostream>
using namespace std;
class Time
{
  int hr, min;

public:
  void input()
  {
    cout << "Enter the Time in hrs and minute" << endl;
    cin >> hr >> min;
  }
  void display()
  {
    cout << "The Time is " << hr << " hour " << min << " minute " << endl;
  }
  friend void add(Time, Time);
};
void add(Time t1, Time t2)
{
  Time t;
  t.min = t1.min + t2.min;
  t.hr = t.min / 60;
  t.min = t.min % 60;
  t.hr = t.hr + t2.hr + t1.hr;
  t.display();
}

int main()
{
  Time T1, T2;
  T1.input();

  T2.input();
  T1.display();
  T2.display();
  cout << "after addition\n";
  add(T1, T2);
  return 0;
}