#include <iostream>
using namespace std;
#include <conio.h>
class a
{
	static int b;

public:
	a()
	{
		b++;
		cout << "object" << b << " has been created" << endl;
	}
	~a()
	{

		cout << "object" << b << " has been destroyed" << endl;
		b--;
	}
};
int a::b;
int main()
{
	a A, B, C;
	getch();
	return 0;
}
