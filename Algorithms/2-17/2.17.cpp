#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int n;
	float x, fact, sum;
	
	cout << "Ââåäèòå çíà÷åíèå äëÿ n è x:" << endl;
	cin >> n >> x;

	sum = 1 + x;
	fact = 1;

	for (int i = 2; i <= n; i++)
	{
		fact *= i;
		sum += (pow(x, i) / fact);
	}
	cout << "Çíà÷åíèå ìíîãî÷ëåíà ðàâíî: " << sum << endl;

	return 0;
}
