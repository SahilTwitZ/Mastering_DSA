// //APPROACH 1 -> O(n)
// #include <iostream>

// struct Node {
//     int data;
//     Node* next;
// };

// int getLength(Node* head) {
//     int len = 0;
//     while (head != nullptr) {
//         len++;
//         head = head->next;
//     }
//     return len;
// }

// Node* findMiddle(Node* head) {
//     int len = getLength(head);
//     int ans = len / 2;
//     Node* temp = head;
//     int cnt = 0;
//     while (cnt < ans) {
//         temp = temp->next;
//         cnt++;
//     }
//     return temp;
// }

// int main() {
//     // Create a sample linked list
//     Node* head = new Node{1, nullptr};
//     Node* current = head;

//     // Append some nodes to the linked list
//     for (int i = 2; i <= 7; i++) {
//         current->next = new Node{i, nullptr};
//         current = current->next;
//     }

//     // Find the middle node of the linked list
//     Node* middle = findMiddle(head);

//     // Output the middle node's data
//     if (middle != nullptr) {
//         std::cout << "The middle node contains data: " << middle->data << std::endl;
//     } else {
//         std::cout << "The list is empty." << std::endl;
//     }

//     // Clean up the memory by deleting the linked list
//     current = head;
//     while (current != nullptr) {
//         Node* next = current->next;
//         delete current;
//         current = next;
//     }

//     return 0;
// }

// APPROACH 2 -> O(n)
#include <iostream>

struct Node
{
    int data;
    Node *next;
};

Node *getMiddle(Node *head)
{
    // Handle special cases: empty list, list with 1 or 2 nodes
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }

    Node *slow = head;
    Node *fast = head->next;
    while (fast != nullptr)
    {
        fast = fast->next;
        if (fast != nullptr)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}

int main()
{
    // Create a sample linked list
    Node *head = new Node{1, nullptr};
    Node *current = head;

    // Append some nodes to the linked list
    for (int i = 2; i <= 5; i++)
    {
        current->next = new Node{i, nullptr};
        current = current->next;
    }

    // Find the middle node of the linked list using the new function
    Node *middle = getMiddle(head);

    // Output the middle node's data
    if (middle != nullptr)
    {
        std::cout << "The middle node contains data: " << middle->data << std::endl;
    }
    else
    {
        std::cout << "The list is empty." << std::endl;
    }

    // Clean up the memory by deleting the linked list
    current = head;
    while (current != nullptr)
    {
        Node *next = current->next;
        delete current;
        current = next;
    }

    return 0;
}
