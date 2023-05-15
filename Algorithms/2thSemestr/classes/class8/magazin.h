#pragma once
#include "print.h"
#include <iostream>
using namespace std;

class magazin :
    public print
{
protected:
	int pages;
public:
	magazin(void);
	magazin(string title, string author, int pages);
	magazin(const magazin& s);
	~magazin(void);
	int Get_pages();
	void Set_pages(int  pages);
	magazin& operator=(const magazin& s);
	void show();
	void input();
};

