#include <iostream>
#include "Dialog.h"
#include "Windows.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Команды:\n+: добавить\n-: удалить\nm: создать лист\ns: Вывод элементов: \nz: Вывод названий элементов\nq: выход\n\n";
	Dialog D;
	D.Execute();
	return 0;
}