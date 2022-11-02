#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 0;
	cin >> a;
	if (a > 2 && a % 2 == 1)
	{
		int h = (a + 1) / 2;
		int otstup = (a - 1) / 2;
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < otstup; j++)
			{
				cout << " ";
			}
			int kolvo = i * 2 + 1;
			for(int l = 0; l < kolvo; l++)
				cout << "*";
			otstup -= 1;
			cout << endl;
		}
		main();
	}
	else
	{
		cout << "Введите нечетное число >3" << endl;
		main();
	}
}