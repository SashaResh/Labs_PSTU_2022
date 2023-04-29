#include <iostream>
#include "Header4.h"
#include "Header4.2.h"
using namespace std;

int main()
{
	Triad t1;
	Triad t2;
	cin >> t1;
	cout << t1 << endl;
	Date d1(3, 5, 2004);
	Date d2(d1);
	if (d1 == d2)
	{
		cout << "ravno" << endl;
	}
	d2.set_day(2);
	if (d2 < d1)
	{
		cout << "menshe" << endl;
	}
	if (d1 > d2)
	{
		cout << "bolshe" << endl;
	}

}