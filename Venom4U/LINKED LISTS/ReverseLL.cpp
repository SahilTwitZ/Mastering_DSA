// APPROACH 1 -> USING LOOP

// #include <iostream>

// class LinkedListNode
// {
// public:
//     int data;
//     LinkedListNode *next;
//     LinkedListNode(int data)
//     {
//         this->data = data;
//         this->next = nullptr;
//     }
// };

// LinkedListNode *reverseLinkedList(LinkedListNode *head)
// {
//     if (head == nullptr || head->next == nullptr)
//     {
//         return head;
//     }
//     LinkedListNode *prev = nullptr;
//     LinkedListNode *curr = head;
//     LinkedListNode *forward = nullptr;
//     while (curr != nullptr)
//     {
//         forward = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = forward;
//     }

//     return prev;
// }

// void printLinkedList(LinkedListNode *head)
// {
//     LinkedListNode *current = head;
//     while (current != nullptr)
//     {
//         std::cout << current->data << " ";
//         current = current->next;
//     }
//     std::cout << std::endl;
// }

// int main()
// {
//     // Create a sample linked list
//     LinkedListNode *head = new LinkedListNode(1);
//     head->next = new LinkedListNode(2);
//     head->next->next = new LinkedListNode(3);
//     head->next->next->next = new LinkedListNode(4);

//     // Print the original (non-reversed) linked list
//     printLinkedList(head);

//     // Reverse the linked list
//     LinkedListNode *reversedHead = reverseLinkedList(head);

//     // Print the reversed linked list
//     printLinkedList(reversedHead);

//     return 0;
// }


// //TIME COMPLEXITY ? SPACE COMPLEXITY ?
// // The time complexity of the reverseLinkedList function in the given code is O(n),
// // where n is the number of nodes in the linked list.
// // The space complexity of the reverseLinkedList function in the given code is O(1),
// // which means it uses a constant amount of additional space regardless of the size of the input linked list.

// APPROACH 2 -> USING RECURSION
#include <iostream>

class LinkedListNode
{
public:
    int data;
    LinkedListNode *next;
    LinkedListNode(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

LinkedListNode *reverseLinkedList(LinkedListNode *head)
{
    // Base case: empty list or single node
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }

    // Reverse the rest of the list recursively
    LinkedListNode *reversedHead = reverseLinkedList(head->next);

    // Adjust the links
    head->next->next = head;
    head->next = nullptr;

    return reversedHead;
}

void printLinkedList(LinkedListNode *head)
{
    LinkedListNode *current = head;
    while (current != nullptr)
    {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main()
{
    // Create a sample linked list
    LinkedListNode *head = new LinkedListNode(1);
    head->next = new LinkedListNode(2);
    head->next->next = new LinkedListNode(3);
    head->next->next->next = new LinkedListNode(4);

    // Print the original (non-reversed) linked list
    printLinkedList(head);

    // Reverse the linked list using recursion
    LinkedListNode *reversedHead = reverseLinkedList(head);

    // Print the reversed linked list
    printLinkedList(reversedHead);

    return 0;
}
