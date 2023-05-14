#pragma once
#include <iostream>﻿
#include <ctime>
using namespace std;

class Iterator
{
private:
	friend class  host;
	int* elem;
public:
	Iterator();
	void operator++();
	void operator--();
	int& operator *() const;
	bool operator!=(const Iterator& it);
};