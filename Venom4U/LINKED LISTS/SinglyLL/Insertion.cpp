#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
// insert at start of linked list
void InsertAtHead(Node* &tail, Node* &head, int d)
{ // why reference  ?  change in original linked list(no copy creation)

    if (head == NULL)
    {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        // new node create
        Node* temp = new Node(d);
        temp->next = head;
        head = temp;
    }
}

// insertion at end of linked list
void InsertAtTail(Node* &tail, Node* &head, int d)
{ // why reference  ?  change in original linked list(no copy creation)

    if (tail == NULL)
    {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        // new node create
        Node* temp = new Node(d);
        tail->next = temp;
        tail = temp;
    }
}

// insert at any position of linked list
void InsertAtPostion(Node* &tail, Node* &head, int position, int d)
{

    // inset at starting position
    if (position == 1)
    {
        InsertAtHead(tail, head, d);
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
        InsertAtTail(tail, head, d);
        return;
    }

    // creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

// printing
void print(Node* &head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    Node* head = NULL;
    Node* tail = NULL;
    InsertAtHead(tail, head, 12);
    InsertAtHead(tail, head, 15);

    InsertAtTail(tail, head, 17);
    InsertAtTail(tail, head, 19);

    print(head);

    InsertAtPostion(tail, head, 4, 22);
    print(head);

    // cout<<"Head: "<<head->data<<endl;
    // cout<<"Tail: "<<tail->data<<endl;

    return 0;
}
