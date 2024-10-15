// //Condition for binary search is elements should be in monotonic order...
// //Time Complexity: O(logn)


// #include<iostream>
// using namespace std;
// int binarySearch(int arr[], int size, int k){
//      int start = 0;
//      int end = size-1;
//      int m = start + (end-start)/2;

//      while(start<=end){
//         if(arr[m]==k){
//             return m;
//         }

//         if (k>arr[m]){
//             start = m + 1;
//         }

//         else{
//             end = m - 1;
//         }

//          m = start + (end-start)/2;
//      }
//      return -1;
// }

// int main(){
//     cout<<"Enter size: "<<endl;
//     int size;
//     cin >> size;
//     cout<<"Enter array: "<<endl;
//     int arr[size];
//     for(int i=0; i<size; i++){
//         cin >> arr[i];
//     }
//     cout<<"Enter k : "<<endl;
//     int k;
//     cin>>k;

//     int index = binarySearch(arr,size,k);

//     cout<<"Index of entered k is "<<index<<endl;
// }
