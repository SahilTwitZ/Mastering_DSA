//Reverse an array

#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}


void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    int arr[6]={1,2,4,6,76,34};
    int brr[5]={0,67,4567,435,23};

    reverse(arr,6);
    reverse(brr,5);

    printArr(arr,6);
    printArr(brr,5);
}



