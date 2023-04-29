#pragma once
#include <iostream>
using namespace std;

class Triad
{
protected:
	int first;
	int second;
	int third;
public:
	Triad();
	Triad(int first, int second, int third);
	Triad(const Triad& buff);
	~Triad();
	void set_first(int first);
	void set_second(int second);
	void set_third(int third);
	int get_first();
	int get_second();
	int get_third();

	friend istream& operator>>(istream& in, Triad& buff);
	friend ostream& operator<<(ostream& out, Triad& buff);
	Triad& operator=(const Triad& buff);
	bool operator==(const Triad& buff);
	bool operator!=(const Triad& buff);
	bool operator<(const Triad& buff);
	bool operator>(const Triad& buff);

};