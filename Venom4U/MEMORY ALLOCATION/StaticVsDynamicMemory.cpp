// REFERENCE VARIABLES --> same memory different names

// WHY?
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int i = 5;
//      int &j = i;// ref variable
//      cout<<"i--> "<<i<<"   j--> "<<j<<endl;
//      i++;
//      cout<<"i--> "<<i<<"   j--> "<<j<<endl;
//      j++;
//      cout<<"i--> "<<i<<"   j--> "<<j<<endl;
//  }

// #include<iostream>
// using namespace std;

// void update(int n){//copy variable // nayi memory allocate hui //pass by value
//     n++;
// }

// void update2(int &n){//ref variable // nayi memory allocate nhi hui //pass by reference
//     n++;
// }
// int main(){
//     int n = 5;
//     cout<<"Before: "<<n<<endl;
//     update(n);
//     cout<<"After: "<<n<<endl;
//     update2(n);
//     cout<<"After2: "<<n<<endl;
// }

// HEAP AND STACK MEMORY
// heap m dynamic allocation hota h

// int *i(stack m) = new int;(heap m)

// stack m static allocation hota h
//  #include<iostream>
//  using namespace std;
//  int main(){
//      char ch = 'q';
//      cout<<sizeof(ch)<<endl;

//     char *c = &ch;
//     cout<<sizeof(c)<<endl;
// }

// #include<iostream>
// using namespace std;

// int getSum(int *arr, int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];

//     }
//     return sum;
// }

// int main(){
//     int n;
//     cin>>n;

// //variable size array
//     int *arr = new int[n]; //heap m array create hua n size ka aur uska address *arr m store hua stack m

// //taking input in array
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int ans = getSum(arr,n);
//     cout<<"Ans is: "<<ans<<endl;
// }