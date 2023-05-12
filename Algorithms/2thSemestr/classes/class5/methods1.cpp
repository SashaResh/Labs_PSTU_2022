#include "Header1.h"
triad::triad()
{
	first = 0;
	second = 0;
	third = 0;
}
triad::triad(int Valuefirst, int Valuesecond, int Valuethird)
{
	first = Valuefirst;
	second = Valuesecond;
	third = Valuethird;
}
triad::triad(const triad& other)
{
	this->first = other.first;
	this->second = other.second;
	this->third = other.third;
}

void triad::setfirst(long int Valuefirst)
{
	first = Valuefirst;
}
int triad::getfirst()
{
	return first;
}
void triad::setsecond(int Valuesecond)
{
	second = Valuesecond;
}
int triad::getsecond()
{
	return second;
}
int triad::getthird()
{
	return third;
}
void triad::setthird(int Valuethird)
{
	third = Valuethird;
}
triad& triad::operator++()
{
	this->first += 1;
	this->second += 1;
	this->third += 1;
	return *this;
}
triad& triad::operator++(int)
{
	this->first += 1;
	this->second += 1;
	this->third += 1;
	return *this;
}

void triad::show()
{
	cout << " Числа: " << first << "." << second << "." << third << endl;
}

triad::~triad()
{
	cout << "Вызван деструктор для обьекта " << this << endl;
}
istream& operator>>(istream& in, triad& tmp)
{
	cout << "Введите первое число: "; in >> tmp.first;
	cout << "Введите второе число: "; in >> tmp.second;
	cout << "Введите третье число: "; in >> tmp.third;
	return in;
}

ostream& operator<<(ostream& out, const triad& tmp)
{
	return (out << "Числа: " << tmp.first << "." << tmp.second << "." << tmp.third << endl);
}