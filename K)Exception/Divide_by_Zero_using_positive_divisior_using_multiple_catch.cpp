#include <iostream>
using namespace std;
int main()
{
    int divisior, dividend, quotient;
    char a[50] = "you entered negative value";
    try
    {
        cout << "Ener the value of divisior and dividend" << endl;
        cin >> divisior >> dividend;
        if (divisior == 0)
        {
            throw divisior;
        }
        else if (divisior < 0)
        {
            throw a;
        }
        else
        {
            quotient = dividend / divisior;
            cout << "The result = " << quotient << endl;
        }
    }
    catch (int x)
    {
        cout << "Please enter Positive value" << endl;
    }
    catch (char *y)
    {
        cout << "Please enter Positive value" << endl;
    }
    return 0;
}