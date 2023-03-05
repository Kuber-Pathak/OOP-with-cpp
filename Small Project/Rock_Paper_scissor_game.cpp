#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int u, r, c = 0, p = 0;
    cout << "Please select number of round u want to play :" << endl;
    cin >> r;
    for (int i = 1; i <= r; i++)
    {

        srand(time(0));
        int n = rand() % 3 + 1;
        cout << "Enter :" << endl
             << "1 for scissors" << endl
             << "2 for rock" << endl
             << "3 for paper" << endl;
        cin >> u;
        if (u == n)
        {
            if (u == 1)
            {
                cout << "You both picked scissors " << endl;
                cout << "Draw" << endl;
                c++;
                p++;
            }
            else if (u == 2)
            {
                cout << "You both picked Rock " << endl;
                cout << "Draw" << endl;
                c++;
                p++;
            }
            else if (u == 3)
            {
                cout << "You both picked paper " << endl;
                cout << "Draw" << endl;
                c++;
                p++;
            }
        }
        else if (u == 1 && n == 2)
        {
            cout << "You picked Scissors" << endl;
            cout << "Computer picked rock" << endl;
            cout << "computer wins" << endl;
            c++;
        }
        else if (u == 1 && n == 3)
        {
            cout << "You picked Scissors" << endl;
            cout << "Computer picked paper" << endl;
            cout << "You win" << endl;
            p++;
        }

        else if (u == 2 && n == 1)
        {
            cout << "You picked Rock" << endl;
            cout << "Computer picked Scissors" << endl;
            cout << "You win" << endl;
            p++;
        }
        else if (u == 2 && n == 3)
        {
            cout << "You picked Rock" << endl;
            cout << "Computer picked paper" << endl;
            cout << "computer wins" << endl;
            c++;
        }
        else if (u == 3 && n == 1)
        {
            cout << "You picked Paper" << endl;
            cout << "Computer picked Scissors" << endl;
            cout << "computer wins" << endl;
            c++;
        }
        else if (u == 3 && n == 2)
        {
            cout << "You picked Paper" << endl;
            cout << "Computer picked rock" << endl;
            cout << "You win" << endl;
            p++;
        }
        else
        {
            cout << "invalid input" << endl;
        }
    }
    if (p > c)
    {
        cout << "You won most of the rounds" << endl;
    }
    else
    {
        cout << "Computer won most of the rounds" << endl;
    }
    return 0;
}