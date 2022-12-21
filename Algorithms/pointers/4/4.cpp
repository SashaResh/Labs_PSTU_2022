#include<iostream>

int main()
{
	int n;
	int tmp; 
	int* ptr = &tmp;
	int max;
	int min;

	std::cin >> n;
	std::cin >> tmp;

	max = *ptr;
	min = *ptr;

	for (int i = 2; i <= n; i++)
	{
		std::cin >> *ptr;

		if (*ptr > max) 
		{ 
			max = *ptr; 
		}
		else if (*ptr < min) 
		{ 
			min = *ptr; 
		}
	}

	std::cout << max << std::endl;
	std::cout << min << std::endl;

	return 0;
}