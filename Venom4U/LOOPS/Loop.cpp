#include<iostream>
using namespace std;

int main(){
int n;
cin >> n ;
int i = 1;
int sum = 0;
while(i<=n){
    sum = sum+i;
    i= i+1;
}
cout << "Value of sum upto entered n is "<< sum << endl;
}


// #include<iostream>
// using namespace std;
//  int main(){
//     int n;
//     cin >> n ;
//     int i = 2;
//     int sum = 0;
//     while(i<=n){
//         sum=sum+i;
//         i=i+2;
//  }
//  cout<<"Sum of all even numbers in between is "<<sum<<endl;
//  }



// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n ;
//     int i=2;
//     while(i<n){
//         if(n%i==0){
//             cout<<"Number is Composite"<<endl;
//             break;
//         }
//         else{
//             cout<<"Number is Prime "<<endl;
//             break;
//         }
//         i=i+1;
//     }
// }





// #include<iostream>
// using namespace std;
// int main(){
//     int rows;
//     cin >> rows ;
//     int i=1;
//     while(i<=rows){
//         int cols=1;
//         while(cols<=rows){
//             cout<<"* ";
//             cols=cols+1;
//         }
//         cout<<endl;
//         i+=1;
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     int n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//         cout<<j;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }
// }





// #include<iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     int n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<n-j+1;
//             j=j+1;
//         }
//     cout<<endl;
//     i=i+1;
//     }
// }




// #include<iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     int n;
//     int count = 1;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<count<<" ";
//             count+=1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }




// #include<iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     int n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<"*";
//             j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
//     }
// }





// #include<iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     int n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<i;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }




// #include<iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     int n;
//     cin >> n;
//     while(i<=n){
//         int j=1;
//         int count = i;
//         while(j<=i){
//             cout<<count;
//             count=count+1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     int n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<i+j-1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     int n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         int value =i;
//         while(j<=i){
//             cout<<value;
//             value=value-1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }



// #include <iostream>
// using namespace std;
// int main(){
//     int i=1;
//     int n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             char ch = 'A'+i-1;
//             cout<<ch;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     int n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             char ch = 'A'+j-1;
//             cout<<ch;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     int n;
//     char count = 'A';
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<count;
//             count = count+1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int i=1;
//     while(i<=n){
//         int j =1;
//         while(j<=n){
//             char ch = 'A'+i+j-2;
//             cout<<ch;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
    
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int i =1;
//     char value='A';
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<value;
//             j=j+1;
//             value=value+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int i =1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             char ch = 'A'+i+j-2;
//             cout<<ch;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i =1 ;
//     while(i<=n){
//         int j = 1;
//         char ch = 'A'+n-i;
//         while(j<=i){
//             cout<<ch;
//             ch=ch+1;
//             j=j+1;
        
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i =1;
//     while(i<=n){
//         int j =1;
//         char ch = 'A'+i-j;
//         while(j<=n){
//             cout<<ch;
//             ch = ch+1;
//             j=j+1;

//         }
//         cout<<endl;
//         i=i+1;
//     }
// }




// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         //space print kr lo
//         int space = n-i;
//         while(space){
//             cout<<" ";
//             space=space-1;
//         }
//         //stars print kr lo
//         int j=1;
//         while(j<=i){
//             cout<<"*";
//             j=j+1;
//         }
//          cout<<endl;
//         i=i+1; 
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cin>>n;
//     int i =1;
//     while(i<=n){
//         int j =1;
//             while(j<=n-i+1){
//             cout<<"*";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cin>>n;
//     int i =1;
//     while(i<=n){
//         int space = i-1;
//         while (space)
//         {
//           cout<<" ";
//           space = space - 1;  /* code */
//         }
//         int j = 1;
//         while(j<=n-i+1){
//             cout<<"*";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
        
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int space = i-1;
//         while(space){
//             cout<<" ";
//             space = space-1;
//         }
//         int j=1;
//         while(j<=n-i+1){
//             cout<<i;
//             j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cin>>n;
//     int i =1;
//     while(i<=n){
//         //space print kr lo
//         int space = i-1;
//         while(space){
//             cout <<" ";
//             space = space-1;

//         }
//         int value = i;
//         int j =1;
//         while(j<=n-i+1){
//             cout<<value;
//             value = value+1;
//             j=j+1;

//         }
//         cout<<endl;
//         i=i+1; 
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i = 1;
//     int value = 1;
//     while(i<=n){
//         int space=n-i;
//         while(space){
//             cout<<" ";
//             space = space-1;
//         }
//         int j=1;
//         while(j<=i){
//             cout<<value;
//             value = value + 1;
//             j = j+1;

//         }
//         cout<<endl;
//         i=i+1;
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i =1;
//     while(i<=n){
//         //space print kr lo
//         int space = n-i;
//         while(space){
//             cout<<" ";
//             space = space -1;
//         }
//         //first triangle print kr lo
//         int j = 1;
//         while(j<=i){
//             cout<<j;
//             j=j+1;
//         }
//         //second triangle print kr lo
//         int start = i-1;
//         while(start){
//             cout<<start;
//             start=start-1;
//         }
//         cout<<endl;
//         i=i+1;

//     }
// }
// right side wale space ko print nhi krte


// //NOT COMPLETED
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         //1st triangle print kr lo
//         int j = 1;
//         while(j<=n-i+1){
//             cout<<j;
//             j=j+1;
//         }
//         //second triangle print kr lo
//         int start =0;
//         while(start){
//             cout<<"*";
//                 start=start+2;
//             }
//             //third triangle print kr lo
//             int start2 = n;
//             while(start2){
//                 cout<<start2;
//                 start2=start2-1;
//             }
//         cout<<endl;
//         i=i+1;
//     }
// }

