#include <iostream>
#include <stdlib.h>
using namespace std;
char Table[3][3] = {{45,45,45}, {45, 45, 45}, {45, 45, 45}};
char name1[50], name2[50];
char choice1, choice2;

void winner()
{
    if (Table[0][0] == choice1 && Table[0][0] == Table[0][2] && Table[0][0] == Table[0][1])
    {
        cout << name1 << " is winner" << endl;
        exit(0);
    }
    else if (Table[0][0] == choice1 && Table[0][0] == Table[1][1] && Table[0][0] == Table[2][2])
    {
        cout << name1 << " is winner" << endl;
        exit(0);
    }
    else if (Table[0][0] == choice1 && Table[0][0] == Table[1][0] && Table[0][0] == Table[2][0])
    {
        cout << name1 << " is winner" << endl;
        exit(0);
    }
    else if (Table[0][1] == choice1 && Table[0][1] == Table[1][1] && Table[0][1] == Table[2][1])
    {
        cout << name1 << " is winner" << endl;
        exit(0);
    }
    else if (Table[0][2] == choice1 && Table[0][2] == Table[1][1] && Table[0][1] == Table[2][0])
    {
        cout << name1 << " is winner" << endl;
        exit(0);
    }
    else if (Table[0][2] == choice1 && Table[0][2] == Table[1][2] && Table[0][2] == Table[2][2])
    {
        cout << name1 << " is winner" << endl;
        exit(0);
    }
    if (Table[0][0] == choice2 && Table[0][0] == Table[0][2] && Table[0][0] == Table[0][1])
    {
        cout << name2 << " is winner" << endl;
        exit(0);
    }
    else if (Table[0][0] == choice2 && Table[0][0] == Table[1][1] && Table[0][0] == Table[2][2])
    {
        cout << name2 << " is winner" << endl;
        exit(0);
    }
    else if (Table[0][0] == choice2 && Table[0][0] == Table[1][0] && Table[0][0] == Table[2][0])
    {
        cout << name2 << " is winner" << endl;
        exit(0);
    }
    else if (Table[0][1] == choice2 && Table[0][1] == Table[1][1] && Table[0][1] == Table[2][1])
    {
        cout << name2 << " is winner" << endl;
        exit(0);
    }
    else if (Table[0][2] == choice2 && Table[0][2] == Table[1][1] && Table[0][1] == Table[2][0])
    {
        cout << name2 << " is winner" << endl;
        exit(0);
    }
    else if (Table[0][2] == choice2 && Table[0][2] == Table[1][2] && Table[0][2] == Table[2][2])
    {
        cout << name2 << " is winner" << endl;
        exit(0);
    }
}
void players()
{
    cout << "Enter the name of 1st player and 2nd player name : " << endl;
    cin >> name1 >> name2;
    cout << " For " << name1 << endl;
    cout << "Choose 'X or 'O" << endl;
    cin >> choice1;
    if (choice1 != 'x' && choice1 != 'o' && choice1 != 'X' && choice1 != 'O')
    {
        while (choice1 != 'x' && choice1 != 'X' && choice1 != 'X' && choice1 != 'O')
        {
            cout << "Invalid input" << endl;
            cout << "Please enter 'x' or 'o'" << endl;
            cin >> choice1;
        }
    }
    if (choice1 == 'x' || choice1 == 'X')
    {
        choice2 = 'O';
    }
    else
    {
        choice2 = 'X';
    }
}
void display()
{
    cout << "  |     |" << endl;
    cout << Table[0][0] << " |  " << Table[0][1] << "  | " << Table[0][2] << endl;
    cout << "-----------" << endl;
    cout << "  |     |" << endl;
    cout << Table[1][0] << " |  " << Table[1][1] << "  | " << Table[1][2] << endl;
    cout << "-----------" << endl;
    cout << "  |     |" << endl;
    cout << Table[2][0] << " |  " << Table[2][1] << "  | " << Table[2][2] << endl;
}
void input()
{
}
int main()
{
    int r1, c1, r2, c2;
    players();
    for (int i = 1; i < 6; i++)
    {
        winner();
        cout << name1 << "'s turn" << endl;
        cout << "Please enter the row,column that u want to make your move  :" << endl;
        cin >> r1 >> c1;
        if (r1 != 1 && r1 != 2 && r1 != 3)
        {
            while (r1 != 1 && r1 != 2 && r1 != 3)
            {
                cout << "Invalid Input" << endl;
                cout << "Please " << name1 << " enter the row between 1,2 and 3" << endl;
                cin >> r1;
            }
        }
        if (c1 != 1 && c1 != 2 && c1 != 3)
        {
            while (c1 != 1 && c1 != 2 && c1 != 3)
            {
                cout << "Invalid Input" << endl;
                cout << "Please " << name1 << " enter the column between 1,2 and 3" << endl;
                cin >> c1;
            }
        }

        Table[r1 - 1][c1 - 1] = choice1;
        display();
        winner();
        cout << name2 << "'s turn" << endl;
        cout << "Please enter the row,column that u want to make your move  :" << endl;
        cin >> r2 >> c2;
        if (r2 != 1 && r2 != 2 && r2 != 3)
        {
            while (r2 != 1 && r2 != 2 && r2 != 3)
            {
                cout << "Invalid Input" << endl;
                cout << "Please " << name2 << " enter the row between 1,2 and 3" << endl;
                cin >> r2;
            }
        }
        if (c2 != 1 && c2 != 2 && c2 != 3)
        {
            while (c2 != 1 && c2 != 2 && c2 != 3)
            {
                cout << "Invalid Input" << endl;
                cout << "Please " << name2 << " enter the column between 1,2 and 3" << endl;
                cin >> c2;
            }
        }
        if (r1 == r2 && c1 == c2)
        {
            while (r1 == r2 && c1 == c2)
            {
                cout << "Invalid Input" << endl;
                cout << "Please dont enter same value:" << endl;
                cout << "Please " << name2 << " enter the row,column that u want to make your move  :" << endl;
                cin >> r2 >> c2;
            }
        }
        Table[r2 - 1][c2 - 1] = choice2;
        display();
    }
    return 0;
}