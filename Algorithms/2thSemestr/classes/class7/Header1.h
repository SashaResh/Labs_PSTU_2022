#pragma once
#include <iostream>
#include <ctime>
using namespace std;

template<class T>
class host
{
private:
	T size;
	T* array;
public:
	host(T size);
	virtual void show();
	~host();
	int& operator () ();
	host operator - (const host& other);
	T& operator [](int index);
};

template<class T>
host<T>::host(T size)
{
	this->size = size;
	array = new T[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 100 + 1;
	}
}
template<class T>
void host<T>::show()
{
	cout << "Множество: ";
	for (int i = 0; i < size; i++)
	{
		cout << " " << array[i];
	}
	cout << endl;
}
template<class T>
host<T>::~host()
{
}
template<class T>
int& host<T>::operator () () 
{
	return size; 
}
template<class T>
host<T> host<T>::operator - (const host& other)
{
	host<T> tmp(size);
	for (int i = 0; i < size; i++)
	{
		tmp[i] = array[i] - other.array[i];
	}
	delete[]array;
	return tmp;
}
template<class T>
T& host<T>::operator [](int index)
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