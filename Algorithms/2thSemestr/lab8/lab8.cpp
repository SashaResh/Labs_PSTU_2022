#include <iostream>
#include <string>

using namespace std;

struct stadion
{
	string name;
	int year;
	int countplaces;
	string* typeofsports;
};
void coutall(int n, stadion stad[])
{
	for (int i = 0; i < n; i++) {
		cout << "Название стадиона " << i + 1 << ": " << stad[i].name << endl;;
		cout << "Год постройки стадиона " << i + 1 << ": " << stad[i].year << endl;
		cout << "Колличество построек стадиона " << i + 1 << ": " << stad[i].countplaces << endl;

		cout << "Виды спорта на стадионе " << i + 1 << ": ";
		for (int j = 0; j < 50; j++)
		{
			if (stad[i].typeofsports[j] != "1") {
				cout << stad[i].typeofsports[j] << " ";
			}
			else
			{
				break;
			}
		}
		cout << endl << endl;;
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите колличество стадионов: ";
	int n, x;
	cin >> n;
	cout << endl;
	stadion* stad = new stadion[n];
	for (int i = 0; i < n; i++) {
		cout << "Введите название стадиона " << i + 1 << ": ";
		cin >> stad[i].name;
		cout << "Введите год постройки стадиона " << i + 1 << ": ";
		cin >> stad[i].year;
		cout << "Введите колличество построек " << i + 1 << ": ";
		cin >> stad[i].countplaces;
		cout << "Введите количество видов спорта на стадионе " << i + 1 << ": ";
		cin >> x;
		stad[i].typeofsports = new string[50];
		for (int j = 0; j < x; j++)
		{
			cout << "Введите вид спорта " << j + 1 << ": ";
			cin >> stad[i].typeofsports[j];
		}
		for (int j = x; j < 50; j++)
		{
			stad[i].typeofsports[j] = "1";
		}
		cout << endl;
	}
	coutall(n, stad);


	cout << "Введите номер года с которого удалять: ";
	int year_to_remove;
	cin >> year_to_remove;
	cout << endl;
	int index_to_remove;
	for (int j = 0; j < n; j++)
	{
		if (stad[j].year < year_to_remove)
		{
			index_to_remove = j;
			for (int i = index_to_remove; i < n - 1; i++)
			{
				stad[i] = stad[i + 1];
			}
			n -= 1;
			stadion* new_stadion = new stadion[n];
			for (int i = 0; i < n; i++)
			{
				new_stadion[i] = stad[i];
			}
			stad = new stadion[n];
			for (int i = 0; i < n; i++)
			{
				stad[i] = new_stadion[i];
			}
			delete[] new_stadion;
			j = 0;
		}
	}
	coutall(n, stad);


	cout << "Введите номер элемента после которого добавлять: ";
	int index_to_add;
	cin >> index_to_add;
	cout << endl;
	n += 2;
	stadion* new_stadion = new stadion[n];
	for (int i = 0; i < n; i++)
	{
		if (i == index_to_add + 1 || i == index_to_add + 2)
		{
			continue;
		}
		else
		{
			new_stadion[i] = stad[i];
		}
	}
	stad = new stadion[n];
	for (int i = 0; i < n; i++)
	{
		stad[i] = new_stadion[i];
	}
	delete[] new_stadion;
	
	for (int i = index_to_add + 1; i <= index_to_add + 2; i++) {
		cout << "Введите название стадиона " << i + 1 << ": ";
		cin >> stad[i].name;
		cout << "Введите год постройки стадиона " << i + 1 << ": ";
		cin >> stad[i].year;
		cout << "Введите колличество построек " << i + 1 << ": ";
		cin >> stad[i].countplaces;
		cout << "Введите количество видов спорта на стадионе " << i + 1 << ": ";
		cin >> x;
		stad[i].typeofsports = new string[50];
		for (int j = 0; j < x; j++)
		{
			cout << "Введите вид спорта " << j + 1 << ": ";
			cin >> stad[i].typeofsports[j];
		}
		for (int j = x; j < 50; j++)
		{
			stad[i].typeofsports[j] = "1";
		}
		cout << endl;
	}
	coutall(n, stad);
}