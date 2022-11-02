#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	int presum = 0;
	int sum = 0;
	int c;

	for (int i = 1; i < a + 1; i++)
	{
		presum = i;
		c = i;
		for (int j = 0; j < i; j++)
		{
			c++;
			presum *= c;
		}
		sum += presum;
	}
	cout << sum;
}