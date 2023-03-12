#include <iostream>
#include <map>
using namespace std;

// Map is an associative array
int main()
{
    map<string, int> marksMap;
    marksMap["Ram"] = 98;
    marksMap["shyam"] = 78;
    marksMap["Hari"] = 76;

    marksMap.insert({{"jadu", 169}, {"jadus", 198}});
    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }
    cout << "The size is: " << marksMap.size() << endl;
    cout << "The maximum size is: " << marksMap.max_size() << endl;
    cout << "The empty's return value is: " << marksMap.empty() << endl;

    return 0;
}