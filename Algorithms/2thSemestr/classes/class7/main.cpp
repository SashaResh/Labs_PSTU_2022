#include <iostream>
#include <ctime>
#include "Header1.h"
#include "Header2.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int k = 1;
	int size = 5;
	host<int> a(size);
	a.show();
	cout << endl << "����� � ��������� ��������: " << a[k] << endl;
	cout << "����� ������� a: " << a() << endl;
	host<int> b(size);
	b.show();
	cout << endl << "����� ������� b: " << b() << endl;
	host<int> c(size);
	c = a - b;
	cout << "�������� �������� ����� - ";
	c.show();

	money<long, int> first(8218866, 99);
	first.show();
	money<long, int> second(7251541, 85);
	second.show();
	money<long, int> third(0, 0);
	third = first - second;
	third.show();
	return 0;
}