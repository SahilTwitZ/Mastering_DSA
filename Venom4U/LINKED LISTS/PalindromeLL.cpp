#include <iostream>
#include <vector>
#include <algorithm>

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

// // APPROACH 1 - Create an array
// // SC = O(n)
// // TC = O(n)

// bool checkPalindrome(vector<int> array)
// {
//     int n = array.size();
//     int s = 0;
//     int e = n - 1;
//     while (s <= e)
//     {
//         if (array[s] != array[e])
//         {
//             return false;
//         }
//         s++;
//         e--;
//     }
//     return true;
// }

// bool isPalindrome(Node *head)
// {
//     vector<int> array;
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         array.push_back(temp->data);
//         temp = temp->next;
//     }

//     return checkPalindrome(array);
// }

// APPROACH 2 - find mid and reverse half
// SC = O(1)
// TC = O(n)

Node *getMid(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

Node *reverse(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool isPalindrome(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return 1;
    }

    // step 1. find mid
    Node *mid = getMid(head);

    // step 2. reverse list after middle
    Node *temp = mid->next;
    mid->next = reverse(temp);

    // step 3. compare both halves
    Node *head1 = head;
    Node *head2 = mid->next;

    while (head2 != NULL)
    {
        if (head1->data != head2->data)
        {
            return 0;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    // step 4. repeat step 2
    temp = mid->next;
    mid->next = reverse(temp);

    return 1;
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

    InsertAtHead(tail, head, 4);
    InsertAtHead(tail, head, 1);
    InsertAtHead(tail, head, 1);
    InsertAtHead(tail, head, 2);
    InsertAtHead(tail, head, 2);
    InsertAtHead(tail, head, 1);
    InsertAtHead(tail, head, 1);
    InsertAtHead(tail, head, 4);

    print(head);

    if (isPalindrome(head))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No";
    }

    return 0;
}
