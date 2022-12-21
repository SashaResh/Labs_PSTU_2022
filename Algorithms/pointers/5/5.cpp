#include<iostream>

int main()
{
	int n;
	int fact = 1;
	int* f = &fact;

	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		*f *= i;
	}

	std::cout << n << fact << std::endl;

	return 0;
}