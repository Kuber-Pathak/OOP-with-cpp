// WAP to enter information about n student and display it using multilevel inheritance
#include <iostream>
using namespace std;
class Person
{
protected:
    char name[50];

public:
    void input1()
    {
        cout << "Enter the name " << endl;
        cin >> name;
    }
};
class Location : public Person
{
protected:
    char address[50];

public:
    void input2()
    {
        cout << "Enter the address " << endl;
        cin >> address;
    }
};

class Student : public Location
{
protected:
    int rollno;

public:
    void input3()
    {
        cout << "Enter the roll no " << endl;
        cin >> rollno;
    }
    void display()
    {
        cout << "Name is " << name << " address is " << address << " roll no is " << rollno << endl;
    }
};
int main()
{
    Student *s[100];
    int n;
    cout << "Enter the number of students" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the details of" << (i + 1) << " students" << endl;
        s[i] = new Student();
        s[i]->input1();
        s[i]->input2();
        s[i]->input3();
    }
    cout << "The information of students are" << endl;
    for (int i = 0; i < n; i++)
    {
        s[i]->display();
        delete s[i];
    }
    return 0;
}