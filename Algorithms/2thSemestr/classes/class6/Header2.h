#pragma once
#include"Header1.h"
class host
{
private:
	int size;
	int* array;
	Iterator beg;
	Iterator end;
public:
	host(int size);
	~host();
	int& operator () ();
	host operator - (const host& other);
	int& operator [](int index);
	Iterator first();
	Iterator last();

};