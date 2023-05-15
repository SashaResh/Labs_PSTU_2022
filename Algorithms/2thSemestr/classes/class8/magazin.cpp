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

//����������
magazin::~magazin(void)
{
}

//��������
int magazin::Get_pages() { return  pages; }

//�����������
void magazin::Set_pages(int  pages) { this->pages = pages; }

//���������� ��������� ������������
magazin& magazin::operator=(const magazin& s)
{
	title = s.title;
	author = s.author;
	pages = s.pages;
	return *this;
}

//����� ��� ������ ���������
void magazin::show()
{
	cout << "��������: " << title << "\n";
	cout << "�����: " << author << "\n";
	cout << "���������� �������: " << pages << "\n\n";
}

//����� ��� ����� ���������
void magazin::input()
{
	cout << "�������� >> "; cin >> title;
	cout << "����� >> "; cin >> author;
	cout << "���������� ������� >> "; cin >> pages;
	cout << "\n";
}
