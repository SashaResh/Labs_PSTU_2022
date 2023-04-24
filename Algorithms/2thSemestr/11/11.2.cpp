#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* prev;
};

// Function to add a new node to the list
void addNode(Node** head, int data)
{
    Node* newNode = new Node;  
    newNode->data = data;  
    newNode->next = *head;  
    newNode->prev = nullptr; 
    if (*head != nullptr)  
        (*head)->prev = newNode;
    *head = newNode;
}

// Function to remove a node from the list
void removeNode(Node** head, int position)
{
    Node* temp = *head; 
    if (position == 0) 
    {
        *head = temp->next; 
        if (*head != nullptr) 
            (*head)->prev = nullptr;
        delete temp; 
        return;
    }
    for (int i = 0; temp != nullptr && i < position; i++) 
    {
        temp = temp->next;
    }
    if (temp == nullptr)
    {
        return;
    }
    temp->prev->next = temp->next;
    if (temp->next != nullptr) 
        temp->next->prev = temp->prev;
    delete temp;
}

// Function to add K elements to a list starting from a given position
void addKNodes(Node** head, int position, int K, int data)
{
    Node* temp = *head;
    for (int i = 0; i < position && temp != nullptr; i++)
    {
        temp = temp->next;
    }
    if (temp == nullptr)
        return;
    for (int i = 0; i < K; i++)
    {
        Node* newNode = new Node; 
        newNode->data = data; 
        newNode->next = temp->next; 
        newNode->prev = temp; 
        temp->next = newNode; 
        if (newNode->next != nullptr) 
            newNode->next->prev = newNode;
        temp = temp->next; 
    }
}

// Function to remove K elements from a list, starting at a given position
void removeKNodes(Node** head, int position, int K)
{
    Node* temp = *head; 
    for (int i = 0; i < position && temp != nullptr; i++)  
    {
        temp = temp->next;  
    }
    if (temp == nullptr) 
        return;
    for (int i = 0; i < K && temp->next != nullptr; i++) 
    {
        Node* next = temp->next;  
        temp->next = next->next; 
        if (temp->next != nullptr)  /
            temp->next->prev = temp;
        delete next;  
    }
}

// Function for finding an element with a given value of the information field
Node* searchNode(Node* head, int data)
{
    Node* temp = head;  
    while (temp != nullptr)  
    {
        if (temp->data == data) 
            return temp;
        temp = temp->next; 
    }
    return nullptr; 
}

// Function for displaying a list on the screen
void printList(Node* head)
{
    Node* temp = head; 
    while (temp != nullptr) 
    {
        cout << temp->data << " "; 
        temp = temp->next; 
    }
    cout << endl; 
}

int main()
{
    Node* temp;
    Node* head = nullptr;
    int data;
    cout << "Enter the data: ";
    cin >> data;
    addNode(&head, data);
    cout << "Enter the data: ";
    cin >> data;
    addNode(&head, data);
    cout << "Enter the data: ";
    cin >> data;
    addNode(&head, data);
    cout << "Enter the data: ";
    cin >> data;
    addNode(&head, data);
    cout << "Enter the data: ";
    cin >> data;
    addNode(&head, data);
    printList(head);
    int position;
    cout << "Enter the position which element will be delete: ";
    cin >> position;
    removeNode(&head, position);
    printList(head);
    int K, data1, position1;
    cout << "Enter from what position need to add element(s): ";
    cin >> position1;
    cout << "Enter how many elements need to add: ";
    cin >> K;
    cout << "Enter the element need to add: ";
    cin >> data1;
    addKNodes(&head, position1, K, data1);
    printList(head);
    int position2, K2;
    cout << "Enter the position from which need to delete element(s): ";
    cin >> position2;
    cout << "Enter how many elements need to delete: ";
    cin >> K2;
    removeKNodes(&head, position2, K2);
    printList(head);
    cout << "Enter the element want to search: ";
    cin >> data1;
    Node* searchNodeResult = searchNode(head, data1);
    if (searchNodeResult != nullptr)
    {
        cout << "Element found!" << std::endl;
    }
    else
        cout << "Element not found!" << std::endl;
}