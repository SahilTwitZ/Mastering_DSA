// //print even numbers form 1 to n using recursion
#include<iostream>
using namespace std;

// void printEven(int n){
//     if(n==2){
//         cout<<2<<endl;
//         return;
//     }
//     printEven(n-2);
//     cout<<n<<endl;
    
// }

// int main(){
//     int n;
//     cin>>n;

//     if(n%2==0){
//         printEven(n);
//     }
//     else{
//         printEven(n-1);
//     }
//     return 0;
// }

// //print all odd numbers from 1 to n

// void printOdd(int n){
//     if(n==1){
//         cout<<1<<endl;
//         return;
//     }
//     printOdd(n-2);
//     cout<<n<<endl;
// }

// int main(){
//     int n;
//     cin>>n;
//     if(n%2==0){
//         printOdd(n-1);
//     }else{
//         printOdd(n);
//     }
//     return 0;
// }


// //factorial of a number using recursion

// int factorial(int n){
//     if(n==0){
//         return 1;
//     }

//     int ans = n * factorial(n-1);
//     return ans;
// }

// int main(){
//     int n;
//     cin>>n;
//     if(n<0){
//         cout<<"Invalid input"<<endl;
//         return 0;
//     }
//     cout<<factorial(n)<<endl;
//     return 0;
// }

// // //sum of n natural numbers using recursion

// int sumN(int n){
//     if(n==0){
//         return 0;
//     }
//     int ans = n + sumN(n-1);
//     return ans;
// }

// int main(){
//     int n;
//     cin>>n;
//     if(n<0){
//         cout<<"Invalid input"<<endl;
//         return 0;
//     }
//     cout<<sumN(n);
//     return 0;
// }



// //power of two 

// int power(int n){
//     if(n==0){
//         return 1;
//     }
//     int ans = 2 * power(n-1);
//     return ans;
// }

// int main(){
//     int n;
//     cin>>n;
//     int ans = power(n);
//     cout<<ans<<endl;
//     return 0;
// }


// //power of a number 

// int power(int n,int p){
//     if(p==0){
//         return 1;
//     }
//     int ans = n * power(n,p-1);
//     return ans;
// }

// int main(){
//     int n,p;
//     cin>>n>>p;
//     int ans = power(n,p);
//     cout<<ans<<endl;
//     return 0;
// }


// // //sum of squares of n natural numbers

// int sumOfSquare(int n){
//     if(n==0){
//         return 0;
//     }
//     int ans = n*n + sumOfSquare(n-1);
//     return ans;
// }

// int main(){
//     int n;
//     cin>>n;

//     cout<<sumOfSquare(n)<<endl;
//     return 0;
// }


// //print fibonacci series using recursion

// void printFibonacci(int n, int a = 0, int b = 1) {
//     if (n == 0) {
//         return;
//     }
//     cout << a << " ";
//     printFibonacci(n - 1, b, a + b);
// }

// int main() {
//     int n;
//     cin >> n;
//     printFibonacci(n);
//     return 0;
// }




