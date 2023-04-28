#pragma once
#include <iostream>
using namespace std;

class Money
{
private:
	long rub;
	int kop;
public:
	Money();
	Money(long rub, int kop);
	Money(Money& buff);
	~Money();
	void set_rub(long rub);
	void set_kop(int kop);
	long get_rub();
	int get_kop();
	friend istream& operator>>(istream& in, Money& buff);
	friend ostream& operator<<(ostream& out, Money& buff);
	
	Money& operator=(const Money& buff);
	Money operator+(const Money& buff);
	bool operator==(const Money& buff);
	bool operator<(const Money& buff);
	bool operator>(const Money& buff);
};