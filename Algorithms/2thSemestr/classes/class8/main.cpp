#include <iostream>
#include "Dialog.h"
#include "Windows.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "�������:\n+: ��������\n-: �������\nm: ������� ����\ns: ����� ���������: \nz: ����� �������� ���������\nq: �����\n\n";
	Dialog D;
	D.Execute();
	return 0;
}