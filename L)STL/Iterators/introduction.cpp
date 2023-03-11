#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1;
    int element, size;
    cout << "Enter the size of vector" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector" << endl;
        cin >> element;
        vec1.push_back(element);
    }
    display(vec1);
    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter, 5, 55);
    display(vec1);
    return 0;
}