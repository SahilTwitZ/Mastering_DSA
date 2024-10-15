//Use Floyd's Cycle-Finding Algorithm, also known as the "tortoise and hare" algorithm. This algorithm involves two pointers that traverse the list at different speeds. If the list is circular, the fast-moving pointer (the hare) will eventually meet the slow-moving pointer (the tortoise).


//Node Structure: The Node struct defines the structure of a linked list node.

//isCircular Function: This function checks if a linked list is circular using Floyd's Cycle-Finding Algorithm.

// If the list is empty (head == nullptr), it returns false.
// Two pointers, slow and fast, are initialized at the head of the list.
// The while loop moves slow by one step and fast by two steps.
// If slow and fast pointers meet, the list is circular, and the function returns true.
// If fast reaches the end (nullptr), the list is not circular, and the function returns false.

// main Function: This function demonstrates the usage of the isCircular function with both non-circular and circular linked lists.

#include <iostream>

    struct Node
{
    int data;
    Node *next;
    Node(int value) : data(value), next(nullptr) {}
};

bool isCircular(Node *head)
{
    if (head == nullptr)
    {
        return false; // An empty list is not circular
    }

    Node *slow = head;
    Node *fast = head;

    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;       // Move slow pointer by one step
        fast = fast->next->next; // Move fast pointer by two steps

        if (slow == fast)
        {
            return true; // Pointers meet, list is circular
        }
    }

    return false; // Fast pointer reached the end, list is not circular
}

int main()
{
    // Example usage:

    // Creating a non-circular linked list
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    if (isCircular(head))
    {
        std::cout << "The linked list is circular." << std::endl;
    }
    else
    {
        std::cout << "The linked list is not circular." << std::endl;
    }

    // Creating a circular linked list
    Node *head2 = new Node(1);
    head2->next = new Node(2);
    head2->next->next = new Node(3);
    head2->next->next->next = head2; // Making the list circular

    if (isCircular(head2))
    {
        std::cout << "The linked list is circular." << std::endl;
    }
    else
    {
        std::cout << "The linked list is not circular." << std::endl;
    }

    return 0;
}
