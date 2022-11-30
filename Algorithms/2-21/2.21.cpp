#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    float n, a, max;
    int i = 2;
    int numFirst = 1;
    int numLast = 1;

    cin >> n;

    max = sin(n + 1 / n);

    while (i <= n)
    {
        a = sin(n + 1 / n);
        if (a > max)
        {
            max = a;
            numFirst = i;
            numLast = i;
        }
        else if (a == max)
        {
            numLast = i;
        }
        i++;

    return 0;
}