#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

// printing or traversing
void print(Node *head)
{
    if (head == NULL) {
        return;
    }

    Node *temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

// finding length of linked list
int getLength(Node *head)
{
    if (head == NULL) {
        return 0;
    }

    int length = 0;
    Node *temp = head;
    do {
        length++;
        temp = temp->next;
    } while (temp != head);
    return length;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;

    // Creating a circular linked list by pointing the next of node1 to itself
    node1->next = head;

    print(head);

    int len = getLength(head);
    cout << "Length = " << len << endl;

    return 0;
}
