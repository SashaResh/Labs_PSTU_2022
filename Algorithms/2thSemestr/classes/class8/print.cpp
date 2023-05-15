#include "print.h"

print::print(void)//без параметров
{
	title = "";
	author = "";
}
print::print(string title, string author)//с параметрами
{
	this->title = title;
	this->author = author;
}
print::print(const print& p)//копирования
{
	title = p.title;
	author = p.author;
}

//деструктор
print::~print(void)
{
}

//селекторы
string print::Get_title() { return title; }
string print::Get_author() { return author; }

//модификаторы
void print::Set_title(string title) { this->title = title; }
void print::Set_author(string author) { this->author = author; }

//перегрузка оператора присваивания
print& print::operator= (const print& p)
{
	title = p.title;
	author = p.author;
	return *this;
}

//метод для вывода атрибутов
void print::show()
{
	cout << "Название: " << title << "\n";
	cout << "Автор: " << author << "\n\n";
}
void print::show_title()
{
	cout << "Название: " << title << "\n";
}
//метод для ввода атрибутов
void print::input()
{
	cout << " Введите название >> "; cin >> this->title;
	cout << "Введите автора >> "; cin >> this->author;
	cout << "\n";
}