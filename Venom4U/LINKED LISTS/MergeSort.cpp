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

Node *merge(Node *left, Node *right)
{
    // left is empty
    if (left == NULL)
    {
        return right;
    }
    if (right == NULL)
    {
        return left;
    }

    Node *ans = new Node(-1);
    Node *temp = ans;

    // merge two sorted linked lists
    while (left != NULL && right != NULL)
    {
        if (left->data < right->data)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }

    while (left != NULL)
    {
        temp->next = left;
        temp = left;
        left = left->next;
    }
    while (right != NULL)
    {
        temp->next = right;
        temp = right;
        right = right->next;
    }
    ans = ans->next;
    return ans;
}

Node *findMid(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node *mergeSort(Node *head)
{
    // base case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    // break linked list in two halves after finding mid
    Node *mid = findMid(head);

    Node *left = head;
    Node *right = mid->next;
    mid->next = NULL;

    // recursive calls to sort both halves
    left = mergeSort(left);
    right = mergeSort(right);

    // merge both halves
    Node *result = merge(left, right);

    return result;
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
    InsertAtHead(tail, head, 10);
    InsertAtHead(tail, head, 11);
    InsertAtHead(tail, head, 102);
    InsertAtHead(tail, head, 103);
    InsertAtHead(tail, head, 310);
    InsertAtHead(tail, head, 130);
    InsertAtHead(tail, head, 130);
    InsertAtHead(tail, head, 150);
    InsertAtHead(tail, head, 180);
    print(head);

    cout << endl;

    head = mergeSort(head);
    print(head);

    return 0;
}
//TC = O(nlog)
//SC= O(logn)


//Why you prefer merge sort in linked list and quick sort in arrays?
//Link on dsa playlist video 53

