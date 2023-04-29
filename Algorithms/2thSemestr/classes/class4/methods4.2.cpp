#include <iostream>
#include "Header4.2.h"
using namespace std;

Date::Date()
{
	first = 0;
	second = 0;
	third = 0;
	cout << "constructor" << endl;
}
Date::Date(int first, int second, int third)
{
	this->first = first;
	this->second = second;
	this->third = third;
	cout << "constructor" << endl;
}
Date::Date(const Date& buff)
{
	this->first = buff.first;
	this->second = buff.second;
	this->third = buff.third;
	cout << "constructor" << endl;
}
Date::~Date()
{
	cout << "destructor" << endl;
}
void Date::set_day(int first)
{
	this->first = first;
}
void Date::set_month(int second)
{
	this->second = second;
}
void Date::set_year(int third)
{
	this->third = third;
}
int Date::get_day()
{
	return this->first;
}
int Date::get_month()
{
	return this->second;
}
int Date::get_year()
{
	return this->third;
}
istream& operator>>(istream& in, Date& buff)
{
	cout << "day?: "; in >> buff.first;
	cout << "month?: "; in >> buff.second;
	cout << "year?: "; in >> buff.third;
	return in;
}
ostream& operator<<(ostream& out, Date& buff)
{
	return(out << buff.first << "." << buff.second << "." << buff.third);
}
Date& Date::operator=(const Date& buff)
{
	this->first = buff.first;
	this->second = buff.second;
	this->third = buff.third;
	return *this;
}
bool Date::operator==(const Date& buff)
{
	return(this->first == buff.first && this->second == buff.second && this->third == buff.third);
}
bool Date::operator!=(const Date& buff)
{
	return(this->first != buff.first || this->second != buff.second || this->third != buff.third);
}
bool Date::operator<(const Date& buff)
{
	if (this->third < buff.third)
	{
		return true;
	}
	else if(this->third == buff.third)
	{
		if (this->second < buff.second)
		{
			return true;
		}
		else if (this->second == buff.second)
		{
			if (this->first < buff.first)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}
bool Date::operator>(const Date& buff)
{
	if (this->third > buff.third)
	{
		return true;
	}
	else if (this->third == buff.third)
	{
		if (this->second > buff.second)
		{
			return true;
		}
		else if (this->second == buff.second)
		{
			if (this->first > buff.first)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}



