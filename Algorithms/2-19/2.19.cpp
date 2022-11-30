#include <iostream>
using namespace std;
int main()
{
	
	int N;
	int S = 0;

	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		if (i % 3 == 0)
		{
			S -= i;
		}
		else
		{
			S += i;
		}

	}
	cout << S << endl;
	return 0;
}