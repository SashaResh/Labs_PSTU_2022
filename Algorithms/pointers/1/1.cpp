#include <iostream>

int main()
{
	int num1;
	int num2;
	int* pnum1;
	int* pnum2;

	std::cin >> num1;

	pnum1 = &num1;

	std::cin >> num2;

	pnum2 = &num2;

	int tmp = *pnum1;
	*pnum1 = *pnum2;
	*pnum2 = tmp;

	std::cout << *pnum1 << std::endl;
	std::cout << *pnum2 << std::endl;

	return 0;
}