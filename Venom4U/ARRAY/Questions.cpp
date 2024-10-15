// ARRAY FAMOUS QUESTIONS

// //Q1-SWAP ALTERNATE 
// #include<iostream>
// using namespace std;

// void SwapAlt(int arr[],int n){
//     for(int i=0;i<n;i=i+2){
//         if(i+1<n){
//             swap(arr[i],arr[i+1]);
//         }
//     }
// }

// void printArr(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }

// int main(){
//     cout<<"Enter the size of array"<<endl;
//     int n;
//     cin>>n;
    
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     SwapAlt(arr,n);

//     printArr(arr,n);

// }


// //Q2-Find the unique element in the array containing diffrent two similar elements

// #include<iostream>
// using namespace std;
// int findUnique(int arr[], int size){
//     int ans = 0;
//     for(int i=0;i<size;i++){
//         ans=ans^arr[i];
//     }
//     cout<<"Unique element found is: "<<ans;
// }
// int main(){
//     cout<<"Enter the size of array"<<endl;
//     int size;
//     cin>>size;
//     cout<<"Enter array"<<endl;
//     int arr[size];
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }

//     findUnique(arr,size);

// }




// //Q3-Find Duplicates

// #include<iostream>
// using namespace std;
// int findDuplicates(int arr[],int size){
//     int ans = 0;
//     for(int i=0;i<size;i++){
//         ans= ans^arr[i];
//     }
//     for(int i=0;i<size;i++){
//         ans = ans^i;
//     }
//     cout<<"Duplicate found "<<ans<<endl;
// }
// int main(){
//     cout<<"Enter size of array"<<endl;
//     int size;
//     cin>>size;
//     cout<<"Enter array: "<<endl;
//     int arr[size];
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }

//     findDuplicates(arr,size);

// }



// //Q4-Pair Sum

//sort(arr.begin(),arr.end());

// //Q5-Triplet Sum

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10] = {1,2,34,5,6,7,4,78,43,22};
//     for(int i=0;i<10;i++){
//         for(int j=1;j<10;j++){
//             for(int k=2;k<10;k++){
//                 cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
//             }
//         }
//     }
// }




// //Q6-Sort 0 1
// #include<iostream>
// using namespace std;


// void Print(int arr[], int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }


// void Sort(int arr[],int size){
//     int left = 0 , right = size-1;
//     while(left < right){
//         while(arr[left]==0 && left < right){
//             left++;
//         }

//         while(arr[right]==1 && left < right){
//             right--;
//         }

// //agar yahan tak phunch gye matlb arr[i]==1 hai aur arr[j]==0 hai

//         swap(arr[left],arr[right]);
//         left++;
//         right--;
//     }
// }


// int main(){
//     cout<<"Enter size: ";
//     int size;
//     cin>>size;
//     cout<<"Enter array: ";
//     int arr[size];
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }

//     Sort(arr,size);
//     Print(arr,size);

// }