#include "Header2.h"
void date::show()
{
	cout << " Date: " << first << "." << second << "." << third << endl;
}
void date::Future(date& other, int n)
{
	int day; int month; int year; int countM = 0; int countY = 0;
	day = other.first + n;
	while (day > 31)
	{
		day = day - 31;
		countM++;
	}
	month = other.second + countM;
	while (month > 12)
	{
		month = month - 12;
		countY++;
	}
	year = other.third + countY;;
	other.first = day; other.second = month; other.third = year;
}
date::date()
{
	first = 0;
	second = 0;
	third = 0;
}
date::date(int Valuefirst, int Valuesecond, int Valuethird)
{
	first = Valuefirst;
	second = Valuesecond;
	third = Valuethird;
}
date::date(const  date& other)
{
	this->first = other.first;
	this->second = other.second;
	this->third = other.third;
}
date& date::operator++()
{
	this->first += 1;
	this->second += 1;
	this->third += 1;
	return *this;
}
date& date::operator++(int)
{
	this->first += 1;
	this->second += 1;
	this->third += 1;
	return *this;
}
date::~date()
{
	cout << "”далили date..." << endl << endl;
}

istream& operator>>(istream& in, date& tmp)
{
	cout << "¬ведите дни: "; in >> tmp.first;
	cout << "¬ведите мес€цы: "; in >> tmp.second;
	cout << "¬ведите годы: "; in >> tmp.third;
	return in;
}

ostream& operator<<(ostream& out, const date& tmp)
{
	return (out << "ƒата: " << tmp.first << "." << tmp.second << "." << tmp.third << endl);
}