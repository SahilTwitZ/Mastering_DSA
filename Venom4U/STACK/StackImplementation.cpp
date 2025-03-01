// Implementation of stack using array
#include <iostream>
using namespace std;

class stack
{
    // properties
public:
    int *arr;
    int top;
    int size;

    // behaviour
    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack underflow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0 && top < size)
        {
            return arr[top];
        }
        else
        {
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    stack st(5);
    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(43);
    st.push(44);
    st.pop();

    cout << st.peek() << endl;

    if (st.isEmpty())
    {
        cout << "Stack is empty.";
    }
    else
    {
        cout << "Stack is not empty.";
    }
}

// // Implementation of stack using linked list
// #include <iostream>
// using namespace std;

// class StackNode
// {
// public:
//     int data;
//     StackNode *next;

//     StackNode(int data)
//     {
//         this->data = data;
//         this->next = nullptr;
//     }
// };

// class Stack
// {
// private:
//     StackNode *top;

// public:
//     Stack()
//     {
//         top = nullptr;
//     }

//     // Push operation
//     void push(int data)
//     {
//         StackNode *newNode = new StackNode(data);
//         if (!newNode)
//         {
//             cout << "Stack overflow" << endl;
//             return;
//         }
//         newNode->next = top;
//         top = newNode;
//     }

//     // Pop operation
//     int pop()
//     {
//         if (isEmpty())
//         {
//             cout << "Stack underflow" << endl;
//             return -1;
//         }
//         StackNode *temp = top;
//         top = top->next;
//         int popped = temp->data;
//         delete temp;
//         return popped;
//     }

//     // Peek operation
//     int peek()
//     {
//         if (isEmpty())
//         {
//             cout << "Stack is empty" << endl;
//             return -1;
//         }
//         return top->data;
//     }

//     // Check if stack is empty
//     bool isEmpty()
//     {
//         return top == nullptr;
//     }

//     // Display stack
//     void display()
//     {
//         if (isEmpty())
//         {
//             cout << "Stack is empty" << endl;
//             return;
//         }
//         StackNode *temp = top;
//         while (temp)
//         {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// int main()
// {
//     Stack stack;

//     stack.push(10);
//     stack.push(20);
//     stack.push(30);

//     cout << "Stack elements: ";
//     stack.display();

//     cout << "Top element is: " << stack.peek() << endl;

//     cout << "Popped element: " << stack.pop() << endl;
//     cout << "Stack elements after pop: ";
//     stack.display();

//     return 0;
// }
