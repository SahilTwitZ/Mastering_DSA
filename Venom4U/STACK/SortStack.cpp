#include <iostream>
#include <stack>

using namespace std;

void sortedInsert(stack<int> &stack, int num)
{
    // base case
    if (stack.empty() || (!stack.empty() && stack.top() < num))
    {
        stack.push(num);
        return;
    }
    int n = stack.top();
    stack.pop();

    // recursive call
    sortedInsert(stack, num);
    stack.push(n);
}

void sortStack(stack<int> &stack)
{
    // base case
    if (stack.empty())
    {
        return;
    }
    int num = stack.top();
    stack.pop();

    // recursive call
    sortStack(stack);
    sortedInsert(stack, num);
}

void print(stack<int> s)
{
    stack<int> temp;
    while (!s.empty())
    {
        temp.push(s.top());
        s.pop();
    }

    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> s;
    s.push(12);
    s.push(2);
    s.push(13);
    s.push(1);
    s.push(-1);

    print(s);
    sortStack(s);
    print(s);
}