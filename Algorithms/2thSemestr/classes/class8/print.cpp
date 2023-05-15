#include "print.h"

print::print(void)//��� ����������
{
	title = "";
	author = "";
}
print::print(string title, string author)//� �����������
{
	this->title = title;
	this->author = author;
}
print::print(const print& p)//�����������
{
	title = p.title;
	author = p.author;
}

//����������
print::~print(void)
{
}

//���������
string print::Get_title() { return title; }
string print::Get_author() { return author; }

//������������
void print::Set_title(string title) { this->title = title; }
void print::Set_author(string author) { this->author = author; }

//���������� ��������� ������������
print& print::operator= (const print& p)
{
	title = p.title;
	author = p.author;
	return *this;
}

//����� ��� ������ ���������
void print::show()
{
	cout << "��������: " << title << "\n";
	cout << "�����: " << author << "\n\n";
}
void print::show_title()
{
	cout << "��������: " << title << "\n";
}
//����� ��� ����� ���������
void print::input()
{
	cout << " ������� �������� >> "; cin >> this->title;
	cout << "������� ������ >> "; cin >> this->author;
	cout << "\n";
}