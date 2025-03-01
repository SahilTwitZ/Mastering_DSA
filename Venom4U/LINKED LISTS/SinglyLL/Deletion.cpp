#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};
// insert at start of linked list
void InsertAtHead(Node *&head, int d)
{ // why reference  ?  change in original linked list(no copy creation)

    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

// insertion at end of linked list
void InsertAtTail(Node *&tail, int d)
{ // why reference  ?  change in original linked list(no copy creation)

    // new node create
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// insert at any position of linked list
void InsertAtPostion(Node *&tail, Node *&head, int position, int d)
{

    // inset at starting position
    if (position == 1)
    {
        InsertAtHead(head, d);
        return;
    }

    Node *temp = head;

    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // inserting at last position
    if (temp->next == NULL)
    {
        InsertAtTail(tail, d);
        return;
    }

    // creating a node for d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void DeleteNode(int position, Node *&head, Node *&tail) {
    // Case 1: Deleting the first (head) node
    if (position == 1) {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;

        // If the list is now empty, update tail to NULL as well
        if (head == NULL) {
            tail = NULL;
        }
        return;
    }

    // Case 2: Deleting a middle or last node
    Node *curr = head;
    Node *prev = NULL;
    int cnt = 1;

    while (cnt < position) {
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    // If the deleted node is the last node, update `tail`
    if (curr->next == NULL) {
        tail = prev;
    }

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}


// printing
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    // created a new node
    Node *node1 = new Node(10);

    // cout<<node1->data << endl;
    // cout<<node1->next << endl;

    // head pointed to new node
    Node *head = node1;
    Node *tail = node1;
    print(head);

    // InsertAtHead(head, 12);
    // InsertAtHead(head,15);

    InsertAtTail(tail, 12);
    InsertAtTail(tail, 15);

    print(head);

    InsertAtPostion(tail, head, 4, 22);
    print(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    DeleteNode(4, head, tail);
    print(head);

    // handle tail when you are deleting the last node ... kaise hoga ?

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    return 0;
}
