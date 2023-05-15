#pragma once
#include "object.h"
#include <iostream>
using namespace std;

class print :
    public object
{
protected:
	string title;
	string author;

public:
	print(void);
	print(string title, string author);
	print(const print& p);
	~print(void);
	string Get_title();
	string Get_author();
	void Set_title(string title);
	void Set_author(string author);
	print& operator= (const print& p);
	void show();
	void show_title();
	void input();
};

