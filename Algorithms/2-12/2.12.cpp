#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int n, tmp, max, min;

    cin >> n;
    cin >> tmp;
    max = tmp;
    min = tmp;

    for (int i = 2; i <= n; i++)
    {
        cin >> tmp;
        if (tmp > max)
        {
            max = tmp;
        }
        else if (tmp < min)
        {
            min = tmp;
        }
    }
    cout << "Сумма максимального и минимального элементов: " << (max + min) << endl;
}