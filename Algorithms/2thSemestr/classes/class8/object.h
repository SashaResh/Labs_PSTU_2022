#pragma once
#include <iostream>
#include "TEvent.h"
#include <ctime>
using namespace std;

class object
{
public:
	virtual void input() = 0;
	virtual void show() = 0;
	virtual void show_title() = 0;
	void HandleEvent(const TEvent&);
};

