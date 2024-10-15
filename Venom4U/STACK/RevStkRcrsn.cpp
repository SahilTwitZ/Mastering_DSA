//algo
//stack ka top side me rkh lo
//use recursion to reverse remaining stack
//wapas aate hue insert at bottom kr dena
//ans return krdena

#include<iostream>
#include<stack>

using namespace std;

void insertAtBottom(stack<int>& myStack, int x){
    //base case
    if(myStack.empty()){
        myStack.push(x);
        return;
    }

    int num = myStack.top();
    myStack.pop();

    //recursive call
    insertAtBottom(myStack, x);
    myStack.push(num);

}


void reverseStack(stack<int> &stack){
    //base case
    if(stack.empty()){
        return;
    }

    int num = stack.top();
    stack.pop();

    //recursive call
    reverseStack(stack);

    insertAtBottom(stack, num);
}

void print(stack<int> s){
    stack<int> temp;
    while(!s.empty()){
        temp.push(s.top());
        s.pop();
    }

    while(!temp.empty()){
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}

int main(){

stack<int> s;
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);

    print(s);
    reverseStack(s);
    print(s);

}