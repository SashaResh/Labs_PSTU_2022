#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cin >> a;
	int h = a * 2 - 1;
	int x = a - 1;
	for (int i = 0; i < h + 1; i++)
	{
		for (int j = 0; j < a; j++)
		{
			if (j <= x)
			{
				cout << "  ";
			}
			else
			{
				cout << "* ";
			}
		}
		cout << endl;
		if (i == a)
		{
			x = 1;
		}
		if (i < a + 1)
		{
			x -= 1;
		}
		else
		{
			x += 1;
		}
	}
	main();
}