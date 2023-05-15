#pragma once
#include <iostream>
#include "object.h"
#include "magazin.h"
using namespace std;

class List
{
protected:
	object** beg;
	int size;
	int cur;
public:
	List(void);
	List(int);
	~List(void);
	void Add(void);
	void Del(void);
	void Show(void);
	void Find(int);
	int operator()();
	void HandleEvent(const TEvent& event);
};

