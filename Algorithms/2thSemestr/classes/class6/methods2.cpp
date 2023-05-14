#include"Header2.h"

host::host(int size)
{
	this->size = size;
	array = new int[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 100 + 1;
	}
	beg.elem = &array[0];
	end.elem = &array[size];
}
host::~host()
{
}
int& host::operator () () 
{
	return size; 
}
host host::operator - (const host& other)
{
	host tmp(size);
	int* temp = new int[size];
	for (int i = 0; i < size; i++)
	{
		temp[i] = array[i] - other.array[i];
	}
	for (int i = 0; i < size; i++)
	{
		tmp.array[i] = temp[i];
	}
	tmp.beg.elem = &(tmp.array[0]);
	tmp.end.elem = &(tmp.array[size]);
	delete[] temp;
	delete[]array;
	return tmp;
}
int& host::operator [](int index)
{
	if (index >= 0 && index < size)
	{
		return array[index];
	}
	else
	{
		cout << endl << "Error" << endl;
	}
}
Iterator host::first() 
{
	return beg; 
}
Iterator host::last()
{
	return end;
}