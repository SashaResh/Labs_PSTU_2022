#pragma once
#include <iostream>
#include "Header4.h"
using namespace std;

class Date : public Triad
{
public:
	Date();
	Date(int first, int second, int third);
	Date(const Date& buff);
	~Date();
	void set_day(int first);
	void set_month(int second);
	void set_year(int third);
	int get_day();
	int get_month();
	int get_year();
	friend istream& operator>>(istream& in, Date& buff);
	friend ostream& operator<<(ostream& out, Date& buff);
	Date& operator=(const Date& buff);
	bool operator==(const Date& buff);
	bool operator!=(const Date& buff);
	bool operator<(const Date& buff);
	bool operator>(const Date& buff);
};
