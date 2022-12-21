#include<iostream>

int main()
{
	float num1;
	float num2;
	float* pnum1;
	float* pnum2;
	float sum = 0;

	std::cin >> num1;
	std::cin >> num2;

	pnum1 = &num1;
	pnum2 = &num2;

	sum = *pnum1 + *pnum2;

	std::cout << sum << std::endl;

	return 0;
}