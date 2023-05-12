#pragma once
#include "Header1.h"
class Vector
{
private:
	abstract** beg;
	int size;
	int cur;
public:
	Vector()
	{
		beg = 0;
		size = 0;
		cur = 0;
	}
	Vector(int n)
	{
		beg = new abstract * [n];
		cur = 0;
		size = n;
	}
	void add(abstract* tmp)
	{
		if (cur < size)
		{
			beg[cur] = tmp;
			cur++;
		}
	}
	~Vector()
	{
		if (beg != 0)
		{
			delete[] beg;
		}
		beg = 0;
	}
	friend ostream& operator<<(ostream& out, const Vector& v);
};
ostream& operator<<(ostream& out, const Vector& v)
{
	cout << "Вектор:" << endl;
	if (v.size == 0)
	{
		out << "Empty" << endl;
	}
	abstract** tmp = v.beg;
	for (int i = 0; i < v.cur; i++)
	{
		(*tmp)->show();
		tmp++;
	}
	return out;
}
