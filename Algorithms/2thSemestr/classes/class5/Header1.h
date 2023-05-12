#pragma once
#include <iostream>
using namespace std;

class abstract
{
public:
	virtual void show() = 0;
};

class triad : public abstract
{
protected:
	int first;
	int second;
	int third;
public:

	triad();
	triad(int Valuefirst, int Valuesecond, int Valuethird);
	triad(const triad& other);
	void setfirst(long int Valuefirst);
	int getfirst();
	void setsecond(int Valuesecond);
	int getsecond();
	int getthird();
	void setthird(int Valuethird);
	triad& operator++();
	triad& operator++(int);
	friend istream& operator>>(istream& in, triad& tmp);
	friend ostream& operator<<(ostream& out, const triad& tmp);
	void show() override;
	~triad();
};


