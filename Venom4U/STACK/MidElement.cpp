// #include<iostream>
// #include<stack>
// using namespace std;

// // Print function using a copy of the stack
// void print(stack<int> s, int size){
//     stack<int> temp = s; // Use a copy of the stack to avoid modifying the original
//     for(int i = 0; i < size; i++){
//         cout << temp.top() << " ";
//         temp.pop();
//     }
//     cout << endl;
// }

// // Function to find and print the middle element of the stack
// void mid(stack<int> s, int size){
//     stack<int> temp;
//     int midIndex = size / 2;
//     for(int i = 0; i < midIndex; i++){
//         temp.push(s.top());
//         s.pop();
//     }
//     cout << "Middle element: " << s.top() << endl;
// }

// int main(){
//     stack<int> s;
//     s.push(5);
//     s.push(6);
//     s.push(7);
//     s.push(8);

//     int size = s.size();
    
//     print(s, size);
//     mid(s, size);

//     return 0;
// }


//Print mid and delete it
#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &inputS, int count, int size, int &midValue){
    if(count == size / 2){
        midValue = inputS.top();
        inputS.pop();
        return;
    }

    int num = inputS.top();
    inputS.pop();

    solve(inputS, count + 1, size, midValue);
    inputS.push(num);
}

int deleteMid(stack<int> &inputS, int N){
    int count = 0;
    int midValue = -1;
    solve(inputS, count, N, midValue);
    return midValue;
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

    int size = s.size();
    
    cout << "Original stack: ";
    print(s);

    int midElement = deleteMid(s, size);
    cout << "Middle element: " << midElement << endl;
    
    cout << "Stack after deleting middle element: ";
    print(s);

    return 0;
}

