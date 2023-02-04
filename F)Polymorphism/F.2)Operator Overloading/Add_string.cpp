#include <iostream>
using namespace std;
#include <string.h>
class Add
{
    char a[50];

public:
    Add() {}
    Add(char *n)
    {
        strcpy(a, n);
    }
    void display()
    {
        cout << "The string is : " << a << endl;
    }
    Add operator+(Add s1)
    {
        Add S;
        strcpy(S.a, a);
        strcat(S.a, s1.a);
        return S;
    }
};
int main()
{
    Add s1("kuber"), s2("pathak"), s3;
    s1.display();
    s2.display();
    cout << "After operation" << endl;
    s3 = s1 + s2;
    s3.display();
    return 0;
}