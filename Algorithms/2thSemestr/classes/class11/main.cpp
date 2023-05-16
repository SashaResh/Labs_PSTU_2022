#include <iostream>
#include <list>
#include "Pair.h"
#include "LinkedList.h"
#include <queue>
using namespace std;

template <typename T>
void show_lst(list<T>& lst)
{
	int i = 1;
	for (T it : lst)
	{
		cout << " " << i++ << ".\t" << it << "\n";
	}
}

template <typename T>
void show_lst(LinkedList<T>& lst)
{
	int i = 1;
	for (T it : lst)
	{
		cout << " " << i++ << ".\t" << it << "\n";
	}
}
void ex_1()
{
	list <double> lst;

	for (int i = 1; i <= 8; i++)
	{
		lst.push_back(i);
	}
	cout << "??????????? ??????:\n";
	show_lst(lst);

	double total = 0;
	for (double c : lst)
		total += c;
	lst.push_back(total / lst.size());
	cout << "??????? ????., ??????????? ? ?????:\n";
	show_lst(lst);

	list <double> tmp = lst;
	lst.clear();
	int k = 1;
	int i, j;
	double res;
	cout << "????????: "; cin >> i >> j;
	cout << "????: ";  cin >> res;
	for (double c : tmp)
	{
		if ((k < i) || (k > j) || (c != res))
		{
			lst.push_back(c);
		}
		k++;
	}
	cout << "????????? ???????? ?? ????????? ?????????:\n";
	show_lst(lst);

	double max = *max_element(lst.begin(), lst.end());
	double min = *min_element(lst.begin(), lst.end());
	for (double& o : lst)
	{
		o += max + min;
	}
	cout << "???????? ????. ? ???. ? ??????? ????????:\n";
	show_lst(lst);
}
void ex_2()
{
	list <Pair> lst;
	lst.push_back(Pair(1, 1.5));
	lst.push_back(Pair(-2, 2.7));
	lst.push_back(Pair(3, -3.2));
	cout << "??????????? ??????:\n";
	show_lst(lst);


	Pair pr(0, 0);
	for (Pair c : lst)
	{
		pr = pr + c;
	}
	pr.a /= lst.size();
	pr.b /= lst.size();
	lst.push_back(pr);
	cout << "??????? ????., ??????????? ? ?????:\n";
	show_lst(lst);

	list <Pair> tmp = lst;
	lst.clear();
	int k = 1;
	int i, j;
	Pair res;
	cout << "????????: "; cin >> i >> j;
	cout << "????: ";  cin >> res;
	for (Pair c : tmp)
	{
		if ((k < i) || (k > j) || (c != res))
		{
			lst.push_back(c);
		}
		k++;
	}
	cout << "????????? ???????? ?? ????????? ?????????:\n";
	show_lst(lst);

	Pair max = *max_element(lst.begin(), lst.end());
	Pair min = *min_element(lst.begin(), lst.end());
	for (Pair& o : lst)
	{
		o = o + max + min;
	}
	cout << "???????? ????. ? ???. ? ??????? ????????:\n";
	show_lst(lst);

}
template <typename T>
void tuda_ego(LinkedList <T>& lst, LinkedList <T>& tmp, int i, int size)
{
	tmp.push(lst.pop());
	if (i == size) return;
	tuda_ego(lst, tmp, i + 1, size);
}
void ex_3()
{
	LinkedList <Pair> lst;
	lst.push(Pair(1, 1.5));
	lst.push(Pair(-2, 2.7));
	lst.push(Pair(3, -3.2));
	cout << "??????????? ??????:\n";
	show_lst(lst);

	Pair pr(0, 0);
	for (Pair c : lst)
	{
		pr = pr + c;
	}
	pr.a /= lst();
	pr.b /= lst();
	lst.push(pr);
	cout << "??????? ????., ??????????? ? ?????:\n";
	show_lst(lst);

	LinkedList <Pair> temp;
	tuda_ego(lst, temp, 1, lst());
	int k = 1;
	int i, j;
	Pair res;
	cout << "????????: "; cin >> i >> j;
	cout << "????: ";  cin >> res;
	for (Pair c : temp)
	{
		if ((k < i) || (k > j) || (c != res))
		{
			lst.push(c);
		}
		k++;
	}
	cout << "????????? ???????? ?? ????????? ?????????:\n";
	show_lst(lst);

	Pair max = lst[0];
	Pair min = lst[0];
	for (auto it = lst.begin(); it != lst.end(); it++)
	{
		if (*it > max) max = *it;
		if (*it < min) min = *it;
	}

	for (int count = 0; count < lst(); count++)
	{
		lst[count] = lst[count] + max + min;
	}
	cout << "???????? ????. ? ???. ? ??????? ????????:\n";
	show_lst(lst);
}
bool operator<(const Pair& pr1, const Pair& pr2)
{
	return ((pr1.a < pr2.a) && (pr1.b < pr2.b));
}
void ex_4()
{
	priority_queue <Pair> lst;
	priority_queue <Pair> tmp;
	lst.push(Pair(1, 1.5));
	lst.push(Pair(-2, 2.7));
	lst.push(Pair(3, -3.2));
	cout << "??????????? ??????:\n";

	Pair sr(0, 0);
	while (!lst.empty())
	{
		cout << lst.top() << endl;
		sr = sr + lst.top();
		tmp.push(lst.top());
		lst.pop();
	}
	sr.a /= tmp.size();
	sr.b /= tmp.size();

	cout << "??????? ????., ??????????? ? ?????:\n";
	while (!tmp.empty())
	{
		cout << tmp.top() << endl;
		lst.push(tmp.top());
		tmp.pop();
	}
	lst.push(sr);
	cout << sr << endl;

	int k = 1;
	int i, j;
	Pair res;
	cout << "????????: "; cin >> i >> j;
	cout << "????: ";  cin >> res;
	while (!lst.empty())
	{
		if ((k < i) || (k > j) || (res != lst.top()))
		{
			tmp.push(lst.top());
		}
		lst.pop();
		k++;
	}
	cout << "????????? ???????? ?? ????????? ?????????:\n";
	Pair max = tmp.top();
	Pair min = tmp.top();
	while (!tmp.empty())
	{
		if (max < tmp.top()) max = tmp.top();
		if (tmp.top() < min) min = tmp.top();
		cout << tmp.top() << endl;
		lst.push(tmp.top());
		tmp.pop();
	}

	//3
	cout << "???????? ????. ? ???. ? ??????? ????????:\n";
	while (!lst.empty())
	{
		tmp.push(max + min + lst.top());
		lst.pop();
	}
	while (!tmp.empty())
	{
		lst.push(tmp.top());
		cout << tmp.top() << endl;
		tmp.pop();
	}
}
void ex_5()
{
	ex_3();
}
int main()
{
	setlocale(0, ".1251");
	ex_1();
	cout << "////////////" << endl;
	ex_2();
	cout << "////////////" << endl;
	ex_3();
	cout << "////////////" << endl;
	ex_4();
	cout << "////////////" << endl;
	ex_5();
	return 0;
}