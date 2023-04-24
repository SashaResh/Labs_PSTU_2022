#include <iostream>
using namespace std;

struct Node
{
	int head;
	Node* next;
};

struct Queue
{
	Node* front;
	Node* back;
	int size;
	void init()
	{
		front = nullptr;
		back = nullptr;
		size = 0;
	}
};

void push(Queue*& queue, int head)
{
	Node* temp = new Node;
	temp->head = head;
	temp->next = nullptr;
	if (queue->size == 0)
	{
		queue->front = temp;
		queue->back = temp;
	}
	else
	{
		queue->back->next = temp;
		queue->back = temp;
	}
	queue->size++;
}

void pop(Queue*& queue)
{
	if (queue->size == 0)
	{
		return;
	}
	queue->front = queue->front->next;
	queue->size--;
}

void insert_Kelements(Queue*& queue, int position, int k)
{
	Queue* temp = new Queue;
	temp->init();
	int head;
	cout << "enter elements want add: ";
	for (int i = 1; i < position; i++)
	{
		push(temp, queue->front->head);
		pop(queue);
	}
	for (int i = 0; i < k; i++)
	{
		cin >> head;
		push(temp, head);
	}
	int init_size = queue->size;
	for (int i = 0; i < init_size; i++)
	{
		push(temp, queue->front->head);
		pop(queue);
	}
	queue = temp;
}

void delete_Kelements(Queue*& queue, int position, int k)
{
	Queue* temp = new Queue;
	temp->init();
	for (int i = 1; i < position; i++)
	{
		push(temp, queue->front->head);
		pop(queue);
	}
	for (int i = 0; i < k; i++)
	{
		pop(queue);
	}
	int init_size = queue->size;
	for (int i = 0; i < init_size; i++)
	{
		push(temp, queue->front->head);
		pop(queue);
	}
	queue = temp;
}

void search_element(Queue*& queue, int element)
{
	Queue* current = new Queue;
	current->init();
	while (queue->front != nullptr && queue->back != nullptr)
	{
		if (queue->front->head == element)
		{
			cout << "element is found" << endl;
			return;
		}
		else
		{
			push(current, queue->front->head);
			pop(queue);
		}
	}
	cout << "element is not found" << endl;
}

Queue* createQueue(int n)
{
	Queue* queue = new Queue;
	queue->init();
	int head;
	for (int i = 0; i < n; i++)
	{
		cin >> head;
		push(queue, head);
	}
	return queue;
}

void printQueue(Queue*& queue)
{
	Node* current = new Node;
	current = queue->front;
	for (int i = 0; i < queue->size; i++)
	{
		cout << current->head << ' ';
		current = current->next;
	}
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	int n, data, pos, k, elem;
	cout << "enter queue's size: ";
	cin >> n;
	cout << "enter queue's elements" << endl;
	Queue* queue = createQueue(n);
	cout << "output queue" << endl;
	printQueue(queue);
	cout << "enter element want to add: ";
	cin >> data;
	push(queue, data);
	cout << "output queue: " << endl;
	printQueue(queue);
	pop(queue);
	cout << "output queue: " << endl;
	printQueue(queue);
	cout << "enter quantity of elements and position where want to add: ";
	cin >> k;
	cin >> pos;
	insert_Kelements(queue, pos, k);
	cout << "output queue: " << endl;
	printQueue(queue);
	cout << "enter quantity of elements and position from where want to delete: ";
	cin >> k;
	cin >> pos;
	delete_Kelements(queue, pos, k);
	cout << "output queue: " << endl;
	printQueue(queue);
	cout << "enter element want to find: ";
	cin >> elem;
	search_element(queue, elem);
	return 0;
}