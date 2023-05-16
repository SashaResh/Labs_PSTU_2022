#include <iostream>
#include "set.h"
#include "error.h"
using namespace std;

int main()
{
	cout << "Invalid size measurement value 5" << endl;
	try
	{
		Set a(2);
		a[0] = 1;
		a[1] = 2;
		cout << "a = ";
		cout << a << endl;
		int idx;
		cout << "Please provide the size measurement b:";
		cin >> idx;
		Set b(idx);
		cin >> b;
		cout << "length a: " << a() << endl;
		cout << "length b: " << b() << endl;
		cout << "b = ";
		cout << b << endl;
		cout << "b++: ";
		cout << b++ << endl;
		cout << "a + b = " << a + b << endl;

	}
	catch (Error& e) { e.what(); }
	return 0;
}