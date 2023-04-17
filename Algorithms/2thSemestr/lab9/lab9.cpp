#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите размер массива: " << endl;
	cin >> n;
	cout << "Введите числа: " << endl;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	int index_to_remove;
	cout << "Какой элемент удалить?: " << endl;
	cin >> index_to_remove;
	if (index_to_remove < n) {
		for (int i = index_to_remove; i < n - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		n -= 1;
		int* new_arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			new_arr[i] = arr[i];
		}
		arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			arr[i] = new_arr[i];
		}
		delete[] new_arr;
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	cout << "Какой элемент добавить?: " << endl;
	int index_to_add;
	cin >> index_to_add;
	if (index_to_add < n + 1)
	{
		bool proverka = false;
		n++;
		int* new_arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			if (i == index_to_add)
			{
				proverka = true;
				continue;
			}
			if (proverka)
			{
				new_arr[i] = arr[i - 1];
			}
			else
			{
				new_arr[i] = arr[i];
			}
		}
		for (int i = 0; i < n; i++) {
			cout << new_arr[i] << " ";
		}
		cout << endl;
		arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			arr[i] = new_arr[i];
		}
		delete[] new_arr;
		cout << "Введите число в этот элемент" << endl;
		cin >> arr[index_to_add];
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
	}
	delete[] arr;
}