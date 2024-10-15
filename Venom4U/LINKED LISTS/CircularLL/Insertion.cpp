#include <iostream>
using namespace std;
#include <map>

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

    // destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "MEMORY IS FREE FOR NODE WITH DATA : " << value << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{
    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    // non-empty list{element present}
    // assuming the element is present in the list
    else
    {
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element found  -> curr is representing element wala node
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

bool detectLoop(Node *&head)
{
    if (head == NULL)
    {
        return false;
    }

    map<Node *, bool> visited;
    Node *temp = head;
    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            // cycle is present
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

void print(Node *tail)
{
    Node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next; // Update tail to the next node in the list
    } while (tail != temp);
    cout << endl;
}

int main()
{

    Node *tail = NULL;

    insertNode(tail, 5, 3);
    // print(tail);

    insertNode(tail, 3, 5);
    // print(tail);

    insertNode(tail, 5, 7);
    // print(tail);

    insertNode(tail, 7, 9);
    // print(tail);

    insertNode(tail, 5, 6);
    // print(tail);

    insertNode(tail, 9, 10);
    print(tail);

    if (detectLoop(tail))
    {
        cout << "Yes loop is present.";
    }
    else
    {
        cout << "No loop.";
    }
}