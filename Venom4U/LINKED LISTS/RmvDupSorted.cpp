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
};
// insert at start of linked list
void InsertAtHead(Node *&tail, Node *&head, int d)
{ // why reference  ?  change in original linked list(no copy creation)

    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        // new node create
        Node *temp = new Node(d);
        temp->next = head;
        head = temp;
    }
}

Node *uniqueSortedList(Node *head)
{
    // empty list
    if (head == NULL)
    {
        return NULL;
    }

    // non empty list
    Node *curr = head;
    while (curr != NULL)
    {
        if ((curr->next != NULL) && curr->data == curr->next->data)
        {
            Node *next_next = curr->next->next;
            Node *nodetoDelete = curr->next;
            delete (nodetoDelete);
            curr->next = next_next;
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
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

    Node *head = NULL;
    Node *tail = NULL;
    InsertAtHead(tail, head, 22);
    InsertAtHead(tail, head, 25);
    InsertAtHead(tail, head, 26);
    InsertAtHead(tail, head, 27);
    InsertAtHead(tail, head, 27);
    InsertAtHead(tail, head, 29);

    print(head);

    uniqueSortedList(head);
    print(head);

    return 0;
}
