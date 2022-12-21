#include <iostream>

int main()
{
	int num1;
	int num2;
	int* pnum1;
	int* pnum2;
	int sum = 0;

	std::cin >> num1;

	std::cin >> num2;

	pnum1 = &num1;
	pnum2 = &num2;

	sum = *pnum1 + *pnum2;

	std::cout << sum << std::endl;

	return 0;
}