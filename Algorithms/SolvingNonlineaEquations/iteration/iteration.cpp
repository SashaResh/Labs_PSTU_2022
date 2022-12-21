// f(x) = arccos(x) - sqrt(1 - 0.3 * x^3);
// f'(x) = -1/(sqrt(1-x^2)) + (0.3 * 3 * x^2)/(2*sqrt(1 - 0.3 * x^3);
// f''(x) = -x/(sqrt(1-x^2))^3 + ((3.6*x*sqrt(1- 0.3x^2) + (0.81*x^4)/(sqrt(1 - 0.3x^2))))/(2 * sqrt(1-0.3x^3))^2;
// [0,1];
// ф(x) = x + λ(arccos(x) - sqrt(1 - 0.3 * x^3))
// -1/r < λ < 0, если f'(x) > 0
// 0 < λ < 1/r, если f'(x) < 0
// r = max(|f'(a)|, |f'(b)|)
// λ = 1/2 = 0.5

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    float x, xPrev;
    double lambda = 0.5;
    x = 1;
    xPrev = -2;
    double eps = 0.000001;

    while (abs(x - xPrev) > eps)
    {
        xPrev = x;
        x = lambda * (acos(xPrev) - sqrt(1 - 0.3 * pow(xPrev, 3))) + xPrev;
    }

    cout << "Корень по методу итераций: " << x << endl;

    return 0;
}