#include "List.h"
#include <iostream>

using namespace std;

List::List(void)
{
	beg = nullptr;
	size = 0;
	cur = 0;
}
List::List(int n)
{
	beg = new object * [n];
	cur = 0;
	size = n;
}
List::~List(void)
{
	if (beg != 0)
	{
		delete[] beg;
	}
	beg = 0;
}
void List::Add()
{
	object* p;
	//выбор из объектов 2 возможных классов
	cout << "1.print\n2.magazin\nEnter num type >> ";
	int y;
	cin >> y; cout << "\n";

	if (y == 1)//добавление объекта класса print
	{
		print* a = new (print);
		a->input();
		p = a;
		if (cur < size)
		{
			beg[cur] = p;
			cur++;
		}
	}
	else if (y == 2)//добавление объекта класса magazin
	{
		magazin* b = new (magazin);
		b->input();
		p = b;
		if (cur < size)
		{
			beg[cur] = p;
			cur++;
		}
	}
	else return;
}
void List::Show()
{
	if (cur == 0)
	{
		cout << "pysto" << endl;
	}
	object** p = beg;
	for (int i = 0; i < cur; i++)
	{
		(*p)->show();
		p++;
	}
}
int List::operator()()
{
	return cur;
}
void List::Del(void)
{
	if (cur == 0)
	{
		return;
	}
	cur--;
}
void List::Find(int tmp)
{
	object** p = beg;
	for (int i = 0; i < cur; i++)
	{
		if (i == tmp - 1)
		{
			(*p)->show();
		}
		p++;
	}
}
void List::HandleEvent(const TEvent& event)
{
	if (event.what == evMessage)
	{
		object** p = beg;
		for (int i = 0; i < cur; i++)
		{
			(*p)->show();
			++p;
		}
	}
}


