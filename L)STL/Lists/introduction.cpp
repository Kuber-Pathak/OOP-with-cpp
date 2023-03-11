#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1; // list of 0 length
    list1.push_back(5);
    list1.push_back(9);
    list1.push_back(7);
    list1.push_back(9);
    display(list1);
    // removing elemnts from th list
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(7);

    // sprting the list
    cout << "After sorting" << endl;
    list1.sort();
    display(list1);

    list<int> list2(3); // empty list of size 3
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 12;
    iter++;
    *iter = 2;
    iter++;
    *iter = 1;
    iter++;
    display(list2);

    // merging two list
    cout << "After merging" << endl;
    list1.merge(list2);
    display(list1);

    // reverse the lsit
    cout << "After reversing" << endl;
    list1.reverse();
    display(list1);
    return 0;
}