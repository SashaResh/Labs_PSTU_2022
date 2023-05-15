#include "magazin.h"

magazin::magazin(void) : print()
{
	pages = 0;
}
magazin::magazin(string title, string author, int pages) : print(title, author)
{
	this->pages = pages;
}
magazin::magazin(const magazin& s)
{
	title = s.title;
	author = s.author;
	pages = s.pages;
}

//деструктор
magazin::~magazin(void)
{
}

//селектор
int magazin::Get_pages() { return  pages; }

//модификатор
void magazin::Set_pages(int  pages) { this->pages = pages; }

//перегрузка оператора присваивания
magazin& magazin::operator=(const magazin& s)
{
	title = s.title;
	author = s.author;
	pages = s.pages;
	return *this;
}

//метод для вывода атрибутов
void magazin::show()
{
	cout << "Название: " << title << "\n";
	cout << "Автор: " << author << "\n";
	cout << "Количество страниц: " << pages << "\n\n";
}

//метод для ввода атрибутов
void magazin::input()
{
	cout << "Название >> "; cin >> title;
	cout << "Автор >> "; cin >> author;
	cout << "Количество страниц >> "; cin >> pages;
	cout << "\n";
}
