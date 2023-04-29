#include <iostream>
#include "Header4.h"
using namespace std;

Triad::Triad()
{
	first = 0;
	second = 0;
	third = 0;
	cout << "constructor" << endl;
}
Triad::Triad(int first, int second, int third)
{
	this->first = first;
	this->second = second;
	this->third = third;
	cout << "constructor" << endl;
}
Triad::Triad(const Triad& buff)
{
	this->first = buff.first;
	this->second = buff.second;
	this->third = buff.third;
	cout << "constructor" << endl;
}
Triad::~Triad()
{
	cout << "destructor" << endl;
}

void Triad::set_first(int first)
{
	this->first = first;
}
void Triad::set_second(int second)
{
	this->second = second;
}
void Triad::set_third(int third)
{
	this->third = third;
}
int Triad::get_first()
{
	return this->first;
}
int Triad::get_second()
{
	return this->second;
}
int Triad::get_third()
{
	return this->third;
}

Triad& Triad::operator=(const Triad& buff)
{
	this->first = buff.first;
	this->second = buff.second;
	this->third = buff.third;
	return *this;
}
istream& operator>>(istream& in, Triad& buff)
{
	cout << "first?: "; in >> buff.first;
	cout << "second?: "; in >> buff.second;
	cout << "third?: "; in >> buff.third;
	return in;
}
ostream& operator<<(ostream& out, Triad& buff)
{
	return(out << buff.first << " " << buff.second << " " << buff.third);
}
bool Triad::operator==(const Triad& buff)
{
	return(this->first + this->second + this->third == buff.first + buff.second + buff.third);
}
bool Triad::operator!=(const Triad& buff)
{
	return(this->first + this->second + this->third != buff.first + buff.second + buff.third);
}
bool Triad::operator<(const Triad& buff)
{
	return(this->first + this->second + this->third < buff.first + buff.second + buff.third);
}
bool Triad::operator>(const Triad& buff)
{
	return(this->first + this->second + this->third > buff.first + buff.second + buff.third);
}

