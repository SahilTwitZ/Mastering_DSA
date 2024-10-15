// #include<iostream>
// using namespace std;
// int main(){
//     int a = 4;
//     int b = 6;
//     cout<<"a&b = "<<(a&b)<<endl;
//     cout<<"a|b = "<<(a|b)<<endl;
//     cout<<"~a = "<<(~a)<<endl;
//     cout<<"a^b = "<<(a^b)<<endl;
//     cout<<"~b = "<<(~b)<<endl;
// }




//Left shift operator (<<) *2
//Right shift operator(>>) /2
//padding for +ve numbers with 0
//padding for -ve numbers is compiler dependent


// #include<iostream>
// using namespace std;
// int main(){
//     cout<<(17>>1)<<endl;
//     cout<<(17>>2)<<endl;
//     cout<<(19<<1)<<endl;
//     cout<<(19<<2)<<endl;
// }



//post increment i++ 1st used then increased
//pre increment ++i 1st increased then used
//post decrement i--
//pre decrement --i
//i++ == i=i+1

// #include<iostream>
// using namespace std;
// int main(){
//     int i=7;
//     cout<<i++<<endl; //7
//     cout<<++i<<endl; //9

//     cout<<i--<<endl; //9
//     cout<<--i<<endl; //7 
// }



//FOR LOOOPS
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter the value of n : ";
// cin>>n;
// for(int i=1; i<=n; i++){
//     cout<<i<<endl;
// }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     for(int i=1; i<=n; i++){
//         sum+=i;
// }
// cout<<"Sum = "<<sum<<endl;
// }


// //Fibonacci Series::
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a = 0;
//     int b = 1;
//     cout<<a<<" ";
//     cout<<b<<" ";
//     for(int i=1; i<=n; i++){
//         int nextNum = a+b;
//         cout<<nextNum<<" ";
//         a=b;
//         b=nextNum;

//     }
// }


// // Checking Prime or Not 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=2;i<n;i++){
//         if (n%i == 0){
//             cout<<"Number is composite."<<endl;
//             break;
//         }
//             else{
//                 cout<<"Number is prime."<<endl;
//                 break;
//             }
// }
// }


// //VARIABLE AND SCOPES  
// #include <iostream>
// using namespace std;
// int main(){
//     int a = 3;
//     cout<<a<<endl;
//     if(true){
//         int a = 5;
//         cout<<a<<endl;
//     }
//     cout<<a<<endl;

// }



// //OPERATOR PRECEDENCE
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     int b = 10;
//     int c = 100;
//     cout<<a-b-c<<endl;
//     cout<<a-b+c<<endl;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int temp;
//     int sum = 0;
//     int prod = 1;
//     while(n!=0){
//         temp = n%10;
//         sum=sum+temp;
//         prod=prod*temp;
//         n=n/10;
//     }
//      cout<<prod-sum<<endl;

// }


// //Q. Write a function that takes an unsigned integer and returns the number of '1' bits it has.(also known as hamming weight).
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;

//     int count=0;
//     while(a){
//         count += a&1;
//         a >>= 1;
//     }
//     cout<<count;
// }

