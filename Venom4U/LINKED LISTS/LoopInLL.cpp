#include <iostream>
#include <map>
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

// insertion at end of linked list
void InsertAtTail(Node *&tail, Node *&head, int d)
{ // why reference  ?  change in original linked list(no copy creation)

    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        // new node create
        Node *temp = new Node(d);
        tail->next = temp;
        tail = temp;
    }
}

// insert at any position of linked list
void InsertAtPostion(Node *&tail, Node *&head, int position, int d)
{

    // inset at starting position
    if (position == 1)
    {
        InsertAtHead(tail, head, d);
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
        InsertAtTail(tail, head, d);
        return;
    }

    // creating a node for d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

// // APPROACH 1
// bool detectLoop(Node *&head)
// {
//     if (head == NULL)
//     {
//         return false;
//     }

//     map<Node *, bool> visited;
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         if (visited[temp] == true)
//         {
//             // cycle is present
//             cout << "Present on element " << temp->data << endl;
//             return true;
//         }
//         visited[temp] = true;
//         temp = temp->next;
//     }
//     return false;
// }

// APPROACH 2 {FLOYD CYCLE DETECT ALGORITHM}
Node *floydDetectLoop(Node *head)
{
        if (head == nullptr) {
            return NULL;
        }
        
        Node* slow = head;
        Node* fast = head;
        
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            
            if (slow == fast) {
                return slow;
            }
        }
        
        return NULL;
}

// FIND BEGIN OF LOOP
Node *getStartNode(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *intersection = floydDetectLoop(head);
    Node *slow = head;

    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

// REMOVE LOOP FROM LL
void removeLoop(Node *head)
{
    if (head == NULL)
    {
        return;
    }

    Node *startOfLoop = getStartNode(head);
    Node *temp = startOfLoop;

    while (temp->next != startOfLoop)
    {
        temp = temp->next;
    }
    temp->next = NULL;
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
    InsertAtHead(tail, head, 12);
    InsertAtHead(tail, head, 10);

    InsertAtTail(tail, head, 15);
    InsertAtTail(tail, head, 22);
    print(head);

    // InsertAtPostion(tail, head, 4, 22);
    // print(head);

    // cout<<"Head: "<<head->data<<endl;
    // cout<<"Tail: "<<tail->data<<endl;

    // create loop
    tail->next = head->next;
    // print(head); //This will cause infinite loop.

    // if (detectLoop(head))
    // {
    //     cout << "Yes loop is present." << endl;
    // }
    // else
    // {
    //     cout << "No loop.";
    // }

    if (floydDetectLoop(head) != NULL)
    {
        cout << "Yes loop is present." << endl;
    }
    else
    {
        cout << "No loop.";
    }

    // cout << "Loop starts from: " << getStartNode(head)->data << endl;

    // removeLoop(head);
    // print(head);

    if (floydDetectLoop(head) != NULL)
    {
        cout << "Yes loop is present." << endl;
    }
    else
    {
        cout << "No loop.";
    }

    return 0;
}
