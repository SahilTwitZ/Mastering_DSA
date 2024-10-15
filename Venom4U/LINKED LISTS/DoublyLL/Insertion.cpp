#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node* prev;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

// printing or traversing
void print(Node* head)
{
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// finding length of linked list
int getLength(Node* head)
{
    int length = 0;
    Node* temp = head;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}

// inserting at start position
void insertAtHead(Node* &tail, Node* &head, int d)
{

    // empty list
    if (head == NULL)
    {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

// inserting at end position
void insertAtTail(Node* &head, Node* &tail, int d)
{
    if (tail == NULL)
    {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

// inserting at any position
void insertAtPosition(Node* &tail, Node* &head, int position, int d)
{

    // inserting at start
    if (position == 1)
    {
        insertAtHead(tail, head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // inserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(head, tail, d);
        return;
    }

    // creating a new node for d
    Node* nodeToinsert = new Node(d);

    nodeToinsert->next = temp->next;
    temp->next->prev = nodeToinsert;
    temp->next = nodeToinsert;
    nodeToinsert->prev = temp;
}

int main()
{

    Node* head = NULL;
    Node* tail = NULL;

    print(head);

    int len = getLength(head);
    cout << "Length = " << len << endl;

    insertAtHead(tail, head, 11);
    print(head);

    insertAtHead(tail, head, 13);
    print(head);

    insertAtHead(tail, head, 16);
    print(head);

    insertAtTail(head, tail, 19);
    print(head);

    insertAtPosition(tail, head, 1, 1401);
    print(head);

    insertAtPosition(tail, head, 6, 140);
    print(head);

    return 0;
}