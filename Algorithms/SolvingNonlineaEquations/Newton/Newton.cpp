// f(x) = arccos(x) - sqrt(1 - 0.3 * x^3);
// f'(x) = -1/(sqrt(1-x^2)) + (0.3 * 3 * x^2)/(2*sqrt(1 - 0.3 * x^3);
// f''(x) = -x/(sqrt(1-x^2))^3 + ((3.6*x*sqrt(1- 0.3x^2) + (0.81*x^4)/(sqrt(1 - 0.3x^2))))/(2 * sqrt(1-0.3x^3))^2;
// [0,1];
// f(b) * f''(b) > 0;
// -0.83 * 2,38 = -1,9754 < 0 => x0 = a;

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x, xPrev;
    x = 0;
    xPrev = -2;
    double eps = 0.000001;

    while (abs(x - xPrev) > eps)
    {
        xPrev = x;
        x = xPrev - ((acos(xPrev) - sqrt(1 - 0.3 * pow(xPrev, 3))) / (-1 / (sqrt(1 - pow(xPrev,2) )) + (0.3 * 3 * pow(xPrev,2)) / (2 * sqrt(1 - 0.3 * pow(xPrev,3)))));
    }

    cout << x << endl;

    return 0;
}