#include <iostream>
using namespace std;
class SoccerPlayer
{
    int jn, ng, na;

public:
    SoccerPlayer()
    {
    }
    SoccerPlayer(int x, int y, int z)
    {
        jn = x;
        ng = y;
        na = z;
    }
    void display()
    {
        cout << "Jersey number = " << jn << " Goal = " << ng << " Assists = " << na << endl;
    }
    friend int operator>(SoccerPlayer &s1, SoccerPlayer &s2);
};
int operator>(SoccerPlayer &s1, SoccerPlayer &s2)
{
    int sum1 = s1.ng + s1.na;
    int sum2 = s2.ng + s2.na;
    if (sum1 > sum2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    SoccerPlayer *s[3];
    int a, b, c, max;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the jersey number, number of goals and number of assits :" << endl;
        cin >> a >> b >> c;
        s[i] = new SoccerPlayer(a, b, c);
    }
    for (int i = 0; i < 3; i++)
    {
        s[i]->display();
    }
    max = 0;
    for (int i = 0; i < 2; i++)
    {
        if (*s[i + 1] > *s[max])
        {
            cout << (i + 1) << " has more goals than " << i << endl;
            max = i + 1;
        }
    }
    s[max]->display();
    return 0;
}