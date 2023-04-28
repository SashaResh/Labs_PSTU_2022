#include "Header3.h"
using namespace std;

int main()
{
	Money a(1, 5);
	Money b(3, 2);
	Money c;
	c = a + b;
	cout << c << endl;
	if (a < b)
	{
		cout << "men`she" << endl;
	}
	else
	{
		cout << "bol`she" << endl;
	}
	a.set_rub(4);
	a.set_kop(8);
	if (a > b)
	{
		cout << "bol`she" << endl;
	}
	else
	{
		cout << "men`she" << endl;
	}
	a = b;
	if (a == b)
	{
		cout << "ravno" << endl;
	}
	else
	{
		cout << "ne ravno" << endl;
	}
}