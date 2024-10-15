// #include<iostream>
// using namespace std;

// int lastOcc(int arr[] , int key , int low , int high){
//     if(low > high ){
//         return  -1;
//     }
//     int mid =  low + (high - low)/2;
//     if(arr[mid] <= key ){
//         int idx = lastOcc(arr , key , mid+1, high);
//         return idx == -1 ? (arr[mid] == key ? mid : idx): idx ;
//     } else {
//         return lastOcc(arr , key , low , mid-1);
//     }
// }
// int firstOcc(int arr[] , int key , int low , int high){
//     if(low > high ){
//         return -1;
//     }
//     int mid =  low + (high - low)/2;
//     if(arr[mid] >= key ){
//         //search to last left side for more occuence
//         int idx =  firstOcc(arr , key , low, mid-1);
//         return idx == -1 ? (arr[mid] == key ? mid : idx): idx ;
//     } else {
//         return firstOcc(arr , key , mid+1 , high);
//     }
// }

// int main(){
//     int arr[6]= {3,2,3,3,3,3};
//     cout<<"First occurrence of 3 is at index "<<firstOcc(arr,3,0,5)<<endl;
//     cout<<"Last occurrence of 3 is at index "<<lastOcc(arr,3,0,5)<<endl;
//     return 0;    
// }
