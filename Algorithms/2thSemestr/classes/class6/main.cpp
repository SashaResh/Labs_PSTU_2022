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
	host a(size);
	Iterator iter;

	for (iter = a.first(); iter != a.last(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl << "����� � ��������� ��������: " << a[k] << endl;
	--iter;
	cout << "���������� �������: " << *iter << endl;
	--iter;
	cout << "���������� �������: " << *iter << endl;
	cout << "����� ������� a: " << a() << endl;

	host b(size);
	for (iter = b.first(); iter != b.last(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl << "����� ������� b: " << b() << endl;

	host c = a - b;
	cout << "�������� �������� ����� - ";
	for (iter = c.first(); iter != c.last(); ++iter)
	{
		cout << *iter << " ";
	}
	return 0;
}