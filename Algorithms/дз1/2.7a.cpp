#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cin >> a;
	if (sqrt(a) == int(sqrt(a)))
	{
		a = int(sqrt(a));
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < a; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "Введите число, которые при выведении из под корня дает целое число" << endl;
		main();
	}
}