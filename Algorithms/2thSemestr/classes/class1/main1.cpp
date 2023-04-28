#include <iostream>
#include "Header1.h"
using namespace std;

int main()
{
	linear_equation Example;
	Example.Init(3, 5);
	Example.Show();
	Example.distance();
	Example.Read();
	Example.Show();
	Example.distance();
}