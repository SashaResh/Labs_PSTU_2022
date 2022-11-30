#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cin >> a;
	if (a > 2)
	{
		for (int i = 1; i < a + 1; i++)
		{
			int l = a - i;
			int c = 0;
			while (c < l) {
				cout << " ";
				c++;
			}
			int j = 0;
			while (j < i)
			{
				cout << "*";
				j++;
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