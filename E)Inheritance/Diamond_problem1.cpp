#include <iostream>
#include <string.h>
using namespace std;
class Person
{
protected:
    char name[50];

public:
    Person(const char *n)
    {
        strcpy(name, n);
    }
    void display()
    {
        cout << "Name is " << name << endl;
    }
};
class Account : virtual public Person
{
protected:
    int salary;

public:
    Account(const char *n, int s) : Person(n)
    {
        salary = s;
    }
    void display1()
    {
        cout << "Salary is " << salary << endl;
    }
};
class Admin : virtual public Person
{
protected:
    int no_year;

public:
    Admin(const char *n, int y) : Person(n)
    {
        no_year = y;
    }
    void display2()
    {
        cout << "Number of year of experience is " << no_year << endl;
    }
};
class Record : public Account, public Admin
{
    int record_no;

public:
    Record(const char *n, int s, int y, int r) : Person(n), Account(n, s), Admin(n, y)
    {
        record_no = r;
    }
    void display3()
    {
        cout << "Record number is " << record_no << endl;
    }
};
int main()
{
    Record R("Kuber", 100, 5, 7777);
    R.display();
    R.display1();
    R.display2();
    R.display3();
    return 0;
}