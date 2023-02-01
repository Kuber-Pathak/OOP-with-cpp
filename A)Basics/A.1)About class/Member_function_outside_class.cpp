#include <iostream>
using namespace std;
class Person
{
    int age;
    char name[50], address[50];

public:
    void input();
    void display();
};
void Person::input()
{
    cout << "enter name address and age of student" << endl;
    cin >> name >> address >> age;
}
void Person::display()
{
    cout << "The name,address and age of student is " << name << "," << address << "," << age;
}
int main()
{
    Person P;
    P.input();
    P.display();
    return 0;
}