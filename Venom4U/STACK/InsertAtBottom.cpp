#include<iostream>
#include<stack>

using namespace std;

void solve(stack<int>& myStack, int x){
    //base case
    if(myStack.empty()){
        myStack.push(x);
        return;
    }

    int num = myStack.top();
    myStack.pop();

    //recursive call
    solve(myStack, x);
    myStack.push(num);

}

stack<int> pushAtBottom(stack<int>& myStack, int x){
    solve(myStack,x);
    return myStack;
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

    int x = 34;

    

    cout << "Original stack: ";
    print(s);

    pushAtBottom(s, x);
    
    cout << "Stack after adding element: ";
    print(s);

}
