#include <iostream>
#include <string>
#include "Header3.h"
using namespace std;

Money::Money()
{
	rub = 0;
	kop = 0;
	cout << "constructor" << endl;
}
Money::Money(long rub, int kop)
{
	this->rub = rub;
	this->kop = kop;
	cout << "constructor" << endl;
}
Money::Money(Money& buff)
{
	rub = buff.rub;
	kop = buff.kop;
	cout << "constructor" << endl;
}
Money::~Money()
{
	cout << "destructor" << endl;
}
void Money::set_rub(long rub)
{
	this->rub = rub;
}
void Money::set_kop(int kop)
{
	this->kop = kop;
}
long Money::get_rub()
{
	return this->rub;
}
int Money::get_kop()
{
	return this->kop;
}
istream& operator>>(istream& in, Money& buff)
{
	cout << "rub?: "; in >> buff.rub;
	cout << "kop?: "; in >> buff.kop;
	return in;
}
ostream& operator<<(ostream& out, Money& buff)
{
	return (out << buff.rub << "," << buff.kop);
}
Money& Money::operator=(const Money& buff)
{
	this->rub = buff.rub;
	this->kop = buff.kop;
	return *this;
}
Money Money::operator+(const Money& buff)
{
	int buff1 = this->rub * 100 + this->kop;
	int buff2 = buff.rub * 100 + buff.kop;
	Money tmp;
	tmp.rub = (buff1 + buff2) / 100;
	tmp.kop = (buff1 + buff2) % 100;
	return tmp;
}
bool Money::operator==(const Money& buff)
{
	if ((this->rub * 100 + this->kop) == (buff.rub * 100 + buff.kop)) { return true; }
	else { return false; }
}
bool Money::operator<(const Money& buff)
{
	if ((this->rub * 100 + this->kop) < (buff.rub * 100 + buff.kop)) { return true; }
	else { return false; }
}
bool Money::operator>(const Money& buff)
{
	if ((this->rub * 100 + this->kop) > (buff.rub * 100 + buff.kop)) { return true; }
	else { return false; }
}