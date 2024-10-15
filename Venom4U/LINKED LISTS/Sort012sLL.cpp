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

// //APPROACH 1 -> Count and replace
// Node *sort012(Node *head)
// {
//     int zeroCount = 0;
//     int oneCount = 0;
//     int twoCount = 0;

//     Node *temp = head;
//     while (temp != NULL)
//     {
//         if (temp->data == 0)
//         {
//             zeroCount++;
//         }
//         else if (temp->data == 1)
//         {
//             oneCount++;
//         }
//         else if (temp->data == 2)
//         {
//             twoCount++;
//         }
//         temp = temp->next;
//     }
//     temp = head;
//     while (temp != NULL)
//     {
//         if (zeroCount != 0)
//         {
//             temp->data = 0;
//             zeroCount--;
//         }
//         else if (oneCount != 0)
//         {
//             temp->data = 1;
//             oneCount--;
//         }
//         else if (twoCount != 0)
//         {
//             temp->data = 2;
//             twoCount--;
//         }
//         temp = temp->next;
//     }
//     return head;
// }

// APPROACH 2 -> Data replacement is not allowed so change links (pointers)

void insertAtTail(Node* &tail, Node* curr)
{
    tail->next = curr;
    tail = curr;
}

Node *sortList(Node *head)
{
    Node *zeroHead = new Node(-1);
    Node *zeroTail = zeroHead;
    Node *oneHead = new Node(-1);
    Node *oneTail = oneHead;
    Node *twoHead = new Node(-1);
    Node *twoTail = twoHead;

    Node *curr = head;
    // create separate list for 0s, 1s, 2s
    while (curr != NULL)
    {
        int value = curr->data;

        if (value == 0)
        {
            insertAtTail(zeroTail, curr);
        }
        else if (value == 1)
        {
            insertAtTail(oneTail, curr);
        }
        else if (value == 2)
        {
            insertAtTail(twoTail, curr);
        }
        curr = curr->next;
    }
    // merge all three sublists

    // 1s list is not empty
    if (oneHead->next!= NULL)
    {
        zeroTail->next = oneHead->next;
    }
    else
    {
        // 1s list is empty
        zeroTail->next = twoHead->next;
    }
    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    //setup head
    head = zeroHead->next;

    //delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;

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
    InsertAtHead(tail, head, 0);
    InsertAtHead(tail, head, 1);
    InsertAtHead(tail, head, 2);
    InsertAtHead(tail, head, 2);
    InsertAtHead(tail, head, 1);
    InsertAtHead(tail, head, 0);
    InsertAtHead(tail, head, 2);
    InsertAtHead(tail, head, 1);
    InsertAtHead(tail, head, 0);

    // sort012(head);
    // print(head);

    sortList(head);
    print(head);

    return 0;
}
