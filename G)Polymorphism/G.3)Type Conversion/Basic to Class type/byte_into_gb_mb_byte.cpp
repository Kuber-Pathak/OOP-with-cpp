#include <iostream>
using namespace std;
class Memory
{
    int byte, kb, mb;

public:
    Memory(int b)
    {
        byte = b;
        kb = byte / 1024;
        mb = kb / 1024;
        kb = kb % 1024;
        byte = byte - (((mb * 1024) + kb) * 1024);
    }
    void display()
    {
        cout << "Memory is " << mb << "mb " << kb << "kb " << byte << "bytes" << endl;
    }
};
int main()
{
    Memory m1 = 1087665;
    cout << "After conversion" << endl;
    m1.display();
    return 0;
}