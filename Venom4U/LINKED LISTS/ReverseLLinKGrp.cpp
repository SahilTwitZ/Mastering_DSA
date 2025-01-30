#include <iostream>

// Definition of the Node class
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};


// Function to reverse k nodes in a linked list
Node* kReverse(Node* head, int k) {
    // Base case
    if (head == nullptr) {
        return nullptr;
    }

    // Step 1: Reverse the first k nodes
    Node* next = nullptr;
    Node* curr = head;
    Node* prev = nullptr;
    int count = 0;

    while (curr != nullptr && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // Step 2: Recursively reverse the remaining list
    if (next != nullptr) {
        head->next = kReverse(next, k);
    }

    // Step 3: Return the head of the reversed list
    return prev;
}


// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

// Function to create a linked list from user input
Node* createList() {
    int n, value;
    std::cout << "Enter the number of elements in the linked list: ";
    std::cin >> n;

    if (n <= 0) {
        return nullptr;
    }

    std::cout << "Enter the elements of the linked list: ";
    std::cin >> value;
    Node* head = new Node(value);
    Node* tail = head;

    for (int i = 1; i < n; i++) {
        std::cin >> value;
        tail->next = new Node(value);
        tail = tail->next;
    }

    return head;
}

// Main function to test the kReverse function
int main() {
    // Create a list from user input
    Node* head = createList();

    std::cout << "Original list: ";
    printList(head);

    int k;
    std::cout << "Enter the value of k: ";
    std::cin >> k;

    head = kReverse(head, k);

    std::cout << "Reversed list: ";
    printList(head);

    return 0;
}
