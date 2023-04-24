#include <iostream>
using namespace std;

struct Node
{
	int head;
	Node* next;
};

struct Stack
{
	Node* node;
	int size;
	void init()
	{
		node = nullptr;
		size = 0;
	}
};

void push(Stack*& stack, int head)
{
	Node* tmp = new Node;
	tmp->head = head;
	tmp->next = stack->node;
	stack->node = tmp;
	stack->size++;
}

void pop(Stack*& stack)
{
	if (stack->node == nullptr)
	{
		return;
	}
	stack->node = stack->node->next;
	stack->size--;
}

void add_Kelements(Stack*& stack, int position, int k)
{
	Stack* temp = new Stack;
	temp->init();
	int head;
	int init_size = stack->size;
	cout << "enter the element want to add: ";
	if (position == 1)
	{
		for (int i = 0; i < k; i++)
		{
			cin >> head;
			push(stack, head);
		}
	}
	else
	{
		for (int i = 0; i <= init_size - position; i++)
		{
			push(temp, stack->node->head);
			pop(stack);
		}
		for (int i = 0; i < k; i++)
		{
			cin >> head;
			push(stack, head);
		}
		init_size = temp->size;
		for (int i = 0; i < init_size; i++)
		{
			push(stack, temp->node->head);
			pop(temp);
		}
	}
	delete temp;
}

void delete_Kelements(Stack*& stack, int position, int k)
{
	Stack* temp = new Stack;
	temp->init();
	int init_size = stack->size;
	if (position == 1)
	{
		for (int i = 0; i < k; i++)
		{
			pop(stack);
		}
	}
	else
	{
		for (int i = 0; i < init_size - position; i++)
		{
			push(temp, stack->node->head);
			pop(stack);
		}
		for (int i = 0; i < k; i++)
		{
			pop(stack);
		}
		init_size = temp->size;
		for (int i = 0; i < init_size; i++)
		{
			push(stack, temp->node->head);
			pop(temp);
		}
	}
	delete temp;
}

void search_element(Stack*& stack, int element)
{
	Stack* current = new Stack;
	current->init();
	while (stack->node != nullptr)
	{
		if (stack->node->head == element)
		{
			cout << "The element is found" << endl;
			return;
		}
		else
		{
			push(current, stack->node->head);
			pop(stack);
		}
	}
	cout << "The element is not found" << endl;
}


Stack* createStack(int n)
{
	Stack* stack = new Stack;
	stack->init();
	int head;
	for (int i = 0; i < n; i++)
	{
		cin >> head;
		push(stack, head);
	}
	return stack;
}

void printStack(Stack*& stack)
{
	Node* current = stack->node;
	for (int i = 0; i < stack->size; i++)
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
	cout << "enter the stack's size: ";
	cin >> n;
	cout << "enter the stack's elements: ";
	Stack* stack = createStack(n);
	cout << "output stack: ";
	printStack(stack);
	cout << "enter the element that want to be add: ";
	cin >> data;
	push(stack, data);
	cout << "output stack: ";
	printStack(stack);
	pop(stack);
	cout << "output stack: " ;
	printStack(stack);
	cout << "enter quantity and position where want to add: ";
	cin >> k;
	cin >> pos;
	add_Kelements(stack, pos, k);
	cout << "output stack: ";
	printStack(stack);
	cout << "enter quantity of elements and position from where want to delete: ";
	cin >> k;
	cin >> pos;
	delete_Kelements(stack, pos, k);
	cout << "output stack: ";
	printStack(stack);
	cout << "enter the element want to find: ";
	cin >> elem;
	search_element(stack, elem);
	return 0;
}