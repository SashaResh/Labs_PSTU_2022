#include <iostream>
#include "Header1.h"
using namespace std;

void linear_equation::Read()
{
	cout << "first?: ";
	cin >> first;
	cout << "second?: ";
	cin >> second;
}

void linear_equation::Show()
{
	cout << "first = " << first << endl;
	cout << "second = " << second << endl;
}

void linear_equation::Init(float A, float B)
{
	first = A;
	second = B;
}

void linear_equation::distance()
{
	cout << "distance = " << sqrt(first * first + second * second) << endl;
}

