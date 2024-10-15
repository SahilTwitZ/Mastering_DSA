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
{
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

// Time Complexity - O(n)
// Space Complexity - O(1)

Node *solve(Node *first, Node *second)
{
    // if only one element is present in first list
    if (first->next == NULL)
    {
        first->next = second;
        return first;
    }

    Node *curr1 = first;
    Node *next1 = curr1->next;
    Node *curr2 = second;
    Node *next2 = curr2->next;

    while (next1 != NULL && curr2 != NULL)
    {
        if (curr2->data >= curr1->data && curr2->data <= next1->data)
        {
            // add nodes in between the first list
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;
            // update pointers
            curr1 = curr2;
            curr2 = next2;
        }
        else
        {
            // curr1 and next1 ko aage badhana prega
            curr1 = curr1->next;
            next1 = next1->next;
            if (next1 == NULL)
            {
                curr1->next = curr2;
                return first;
            }
        }
    }
    return first;
}

Node *sortTwoLists(Node *first, Node *second)
{
    if (first == NULL)
    {
        return second;
    }
    if (second == NULL)
    {
        return first;
    }
    if (first->data <= second->data)
    {
        return solve(first, second);
    }
    else
    {
        return solve(second, first);
    }
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
    // First linked list
    Node *head1 = NULL;
    Node *tail1 = NULL;

    InsertAtHead(tail1, head1, 50);
    InsertAtHead(tail1, head1, 15);
    InsertAtHead(tail1, head1, 5);
    InsertAtHead(tail1, head1, 3);
    InsertAtHead(tail1, head1, 1);

    cout << "First Linked List: ";
    print(head1);

    // Second linked list
    Node *head2 = NULL;
    Node *tail2 = NULL;
    InsertAtHead(tail2, head2, 5);
    InsertAtHead(tail2, head2, 4);
    InsertAtHead(tail2, head2, 2);
    InsertAtHead(tail2, head2, 1);

    cout << "Second Linked List: ";
    print(head2);

    sortTwoLists(head1, head2);
    print(head1);

    return 0;
}
