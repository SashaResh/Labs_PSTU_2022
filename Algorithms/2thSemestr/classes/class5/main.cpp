#include <iostream>
#include "Header1.h"
#include "Header2.h"
#include "Header3.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	Vector v(2);
	triad a;
	cin >> a;
	cout << a;
	date b;
	cin >> b;
	cout << b;
	abstract* tmp = &a;
	v.add(tmp);
	tmp = &b;
	b.Future(b, 1500);
	tmp->show();
	v.add(tmp);
	cout << v;
	return 0;
}