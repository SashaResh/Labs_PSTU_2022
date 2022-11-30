#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
    int n, tmp, max;
    cin >> n;
    cin >> max;

    for (int i = 2; i <= n; i++)
    {
        cin >> tmp;
        if (tmp > max)
        {
            max = tmp;
        }
    }
    cout << max << endl;
}
