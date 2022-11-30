#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cin >> a;
	if (a > 2)
	{
		for (int i = 0; i < a; i++)
		{
			if (i == 0)
			{
				for (int j = 0; j < a; j++)
				{
					cout << "*";
				}
			}
			else if (i == a - 1)
			{
				for (int j = 0; j < a; j++)
				{
					cout << "*";
				}
			}
			else
			{
				for (int l = 0; l < a; l++)
				{
					if (l == 0 || l == a - 1)
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}
				}
			}
			cout << endl;
		}
	}
	else
	{
		cout << "Ведите число >2" << endl;
		main();
	}
}