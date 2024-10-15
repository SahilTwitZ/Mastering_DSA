// Add two numbers represented by a linked list
// Ex. 4->5 + 3->4->5 = 3->9->0
#include <iostream>
using namespace std;

// This defines a Node class to represent each element of the linked list.
// Each node has two parts: data (which stores the value) and next (a pointer to the next node in the list).
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// This function reverses a linked list.
// It iterates through the list and reverses the direction of the next pointers.
// prev will point to the new head of the reversed list.
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

// This function inserts a new node with value val at the end of the linked list.
// If the list is empty, both head and tail point to the new node.
// Otherwise, it adds the new node to the end and updates the tail pointer.

void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *temp = new Node(val);
    // empty list
    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

// This function adds two numbers represented by two linked lists.
// It iterates through both lists, adding corresponding nodes and managing the carry.
// If either list is longer, it continues to add the remaining digits.
// Any leftover carry is also added as a new node.
// The result is built as a new linked list.
Node *add(Node *first, Node *second)
{
    int carry = 0;

    Node *ansHead = NULL;
    Node *ansTail = NULL;

    while (first != NULL || second != NULL || carry != 0)
    {
        int sum = carry;
        if (first != NULL)
        {
            sum += first->data;
            first = first->next;
        }
        if (second != NULL)
        {
            sum += second->data;
            second = second->next;
        }
        int digit = sum % 10;
        insertAtTail(ansHead, ansTail, digit);
        carry = sum / 10;
    }

    return ansHead;
}

// This function handles the overall process.
// It first reverses both input lists to facilitate addition from the least significant digit.
// It then adds the two reversed lists using the add function.
// Finally, it reverses the resulting list to get the final sum in the correct order.
Node *addTwoLists(Node *first, Node *second)
{
    // step 1. reverse input LL
    first = reverse(first);
    second = reverse(second);

    // step 2. add 2 LL
    Node *ans = add(first, second);

    // step 3. ans reverse
    ans = reverse(ans);
    return ans;
}

// Helper function to print linked list
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    // Create first list: 4->5
    Node *first = new Node(4);
    first->next = new Node(5);
    first->next->next = new Node(5);
    cout << "List1: ";
    printList(first);

    // Create second list: 3->4->5
    Node *second = new Node(3);
    second->next = new Node(4);
    second->next->next = new Node(5);
    cout << "List2: ";
    printList(second);

    Node *result = addTwoLists(first, second);

    // Print result list: should be 3->9->0
    cout << "After Addition List: ";
    printList(result);

    return 0;
}

// Overall Time Complexity: O(N + M)
// This includes reversing both lists and then adding them.
// Overall Space Complexity: O(max(N, M))
// This is due to the space required for the new linked list storing the sum.
