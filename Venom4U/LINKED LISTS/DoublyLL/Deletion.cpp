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

    // destructor
    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "MEMORY FREE FOR NODE WITH DATA: " << val << endl;
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

// inserting at position
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

void DeleteNode(int position, Node* &head)
{

    // deleting first or start node
    if (position == 1)
    {
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
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

    DeleteNode(1, head);
    print(head);

    return 0;
}

// tail delete krte wqt tail kahan p hai handle kro usko