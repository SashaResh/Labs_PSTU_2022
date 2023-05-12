#pragma once
#include "Header1.h"
class date : public triad
{
public:
	void show() override;
	void Future(date& other, int n);
	date();
	date(int Valuefirst, int Valuesecond, int Valuethird);
	date(const  date& other);
	date& operator++();
	date& operator++(int);
	friend istream& operator>>(istream& in, date& tmp);
	friend ostream& operator<<(ostream& out, const date& tmp);
	~date();
};