// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int a,b,c;
//     cin>>a>>b;
//     c=pow(a,b);
//     cout<<c<<endl;
// }


// #include<iostream>
// using namespace std;
// int power(int num1,int num2){
//     int ans = 1;
//     for(int i=1;i<=num2;i++){
//         ans=ans*num1;
//     }
//     return ans;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//    int answer = power(a,b);
//    cout<<answer<<endl;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// //1->Even
// //0->Odd
// bool isEven(int a){
//     if(a&1){
//         return 0;
//     }
//     else{
//         return 1;
//     }
// }
// int main(){
//     int num;
//     cin>>num;
//     if(isEven(num)){
//         cout<<"Number is even."<<endl;
//     }
//     else{
//         cout<<"Number is odd."<<endl;
//     }
// }   




// #include <iostream>
// using namespace std;
// int factorial(int n){
//     int fact = 1;
//     for(int i =1;i<=n;i++){
//         fact = fact*i;
//     }
//     return fact;
// }
// int nCr(int n, int r){
//     int answer = ((factorial(n))/(factorial(r)*factorial(n-r)));
//     return answer;
// }
// int main(){
//     int n,r;
//     cin>>n>>r;
//     cout<<"Answer is "<<(nCr(n,r))<<endl;
// }




// #include <iostream>
// using namespace std;
    ////Function Signature
// void Count(int n){
    ////Function Body
//     for(int i=1;i<=n;i++){
//         cout<<i<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
    ////Function Call
//     Count(n);

// }



// #include <iostream>
// using namespace std;
// bool isPrime(int n){
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main(){
//     int n;
//     cin>>n;
//     if(isPrime(n)){
//         cout<<"Prime"<<endl;
//     }
//     else{
//         cout<<"Composite"<<endl;
//     }
// }



// #include<iostream>
// using namespace std;
// void Fibo(int n){
//     int a = 0;
//     int b = 1;
//     cout<<a<<" ";
//     cout<<b<<" ";
//     for(int i=1;i<=n;i++){
//         int NextNum = a+b;
//         cout<<NextNum<<" ";
//         a=b;
//         b=NextNum;
//     }

// }
// int main(){
//     int n;
//     cin>>n;
//     Fibo(n);

// }


// #include <iostream>

// int fibonacci(int n) {
//     if (n <= 1)
//         return n;
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }

// int main() {
//     int n;
//     std::cout << "Enter the value of n: ";
//     std::cin >> n;

//     std::cout << "The " << n << "th number in the Fibonacci series is: " << fibonacci(n) << std::endl;

//     return 0;
// }



////PASS BY VALUE

// #include <iostream>
// using namespace std;
// void dummy(int n) {
//     n++;
//     cout<<"n is "<<n<<endl;
// }
// int main(){
//     int n;
//     cin >> n;
//     dummy(n);
//     cout<<"Number n is "<<n<<endl;
// }


// #include<iostream>
// using namespace std;
// void update(int a){
//     a=a/2;
//     // cout<<a<<endl;
// }

// int main(){
//     int a=10;
//     update(a);
//     cout<<a<<endl;
// }



















































































    