#include <iostream>
using namespace std;
int main()
{
    int divisior, dividend, quotient;
    try
    {
        cout << "Enter the value of divisior and dividend" << endl;
        cin >> divisior >> dividend;
        if (divisior == 0)
        {
            throw divisior;
        }
        else
        {
            quotient = dividend / divisior;
            cout << "The Result is = " << quotient << endl;
        }
    }
    catch (int a)
    {
        cout << "please enter a non zero value" << endl;
    }
    return 0;
}