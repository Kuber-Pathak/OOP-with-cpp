#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    // Fnction Object:funtion wrapped in a class so that it is available as an object
    int arr[] = {1, 5, 3, 8};
    // sort(arr,arr+4); sorts in ascending order
    sort(arr, arr + 4, greater<int>()); // using functor
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}