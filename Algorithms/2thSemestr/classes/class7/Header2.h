#pragma once
#include <iostream>
#include <ctime>
using namespace std;

template<class T, class T2>
class money
{
private:
	T rubles;
	T copeyka;
public:
	money(long rubles, int copeyka);
	~money();
	void show();
	money operator - (const money& other);
};

template<class T, class T2>
money<T, T2>::money(long rubles, int copeyka)
{
	this->rubles = rubles;
	this->copeyka = copeyka;
}
template<class T, class T2>
money<T, T2>::~money() {};
template<class T, class T2>
void money<T, T2>::show()
{
	cout << "Ñóììà: " << rubles << "," << copeyka << endl;
}
template<class T, class T2>
money<T, T2> money<T, T2>::operator - (const money& other)
{
	money<T, T2> tmp(243421992, 167);
	tmp.rubles = this->rubles - other.rubles;
	tmp.copeyka = this->copeyka - other.copeyka;
	return tmp;
}