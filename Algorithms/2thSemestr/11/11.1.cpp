#include <iostream>
using namespace std;

struct ListElem
{
    int data;
    ListElem* next;
};
void push_elem(ListElem* &head, int &size, int pos)
{
    size++;
    ListElem* tail = head;
    for (int i = 1; i < (pos - 1); i++)
    {
        tail = tail->next;
    }
    ListElem* node = new ListElem;
    cout << "Введите значение элемента " << pos << ": ";
    cin >> node->data;
    if (pos == 1)
    {
        node->next = head;
        head = node;
    }
    else
    {
        node->next = tail->next;
        tail->next = node;
    }
}
void delete_elem(ListElem* &head, int &size, int pos)
{
    ListElem* tail = head;
    ListElem* tail1;
    for (int i = 1; i < (pos - 1); i++)
    {
        tail = tail->next;
    }
    if (pos == 1)
    {
        head = tail->next;
    }
    if (pos == size)
    {
        tail->next = nullptr;
    }
    else
    {
        tail1 = tail->next;
        tail1 = tail1->next;
        tail->next = tail1;
    }
    size--;
}
void delete_elems(ListElem*& head, int& size, int pos, int k)
{
    for (int i = 0; i < k; i++)
    {
        delete_elem(head, size, pos);
    }
    
}
void push_elems(ListElem*& head, int& size, int pos, int k)
{
    for (int i = 0; i < k; i++)
    {
        push_elem(head, size, pos + i);
    }
}
void coutall(ListElem* head, int size)
{
    ListElem* tail = head;
    for (int i = 0; i < size; i++)
    {
        cout << tail->data << " ";
        tail = tail->next;
    }
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int size = 1, pos, k;
    ListElem *head = new ListElem;
    cout << "Введите значение элемента 1: ";
    cin >> head->data;
    head->next = nullptr;
    cout << "Под каким номером добавить элемент?: ";
    cin >> pos;
    push_elem(head, size, pos);
    cout << "Под каким номером добавить элементы?: ";
    cin >> pos;
    cout << "Сколько элементов добавить?: ";
    cin >> k;
    push_elems(head, size, pos, k);
    coutall(head, size);
    cout << "Под каким номером удалить элемент?: ";
    cin >> pos;
    delete_elem(head, size, pos);
    coutall(head, size);
    cout << "Под каким номером удалить элементы? ";
    cin >> pos;
    cout << "Сколько элементов удалить?: ";
    cin >> k;
    delete_elems(head, size, pos, k);
    coutall(head, size);
}