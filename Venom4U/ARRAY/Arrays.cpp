#include <iostream>
using namespace std;
int main(){
    int array[100000] = {1};
    cout << array[0];

    // Initialize an array
    int a[8] = {1,2,3,4,5,6,7,8};
    //Access an element
    cout<<"Value at 3rd index is "<<a[3]<<endl;

    int b[16] = {1,2};
    cout<<"Value at 3rd index is "<<b[3]<<endl;
    cout<<"Value at 1st index is "<<b[1]<<endl;

    //Printing the array
    int n = 15;
    for(int i=0; i<=n; i++){
        cout<<b[i]<<" ";
    }


    
}

//Arrays with functions
#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Printing Done"<<endl;
}
int main(){
    int arr[7]={2,6,9};
    printArray(arr,7);
    int size = sizeof(arr)/sizeof(int);
    cout<<"Size of array is "<<size<<endl;

    char ch[5] = {'a','v','d','s'};
    cout<<ch[3]<<endl;
    for(int i=0;i<5;i++){
        cout<<ch[i]<<" ";
    }

}


//Max Min 

#include<iostream>
using namespace std;
int getMax(int num[], int n){
    int maxm = INT32_MIN;
    for(int i=0;i<n;i++){
    maxm = max(maxm,num[i]);
    // or
    //     if(num[i]>max){
    //         max = num[i];
    //     }
    }
    return maxm;
}
int getMin(int num[], int n){
    int minm = INT32_MAX;
    for(int i=0;i<n;i++){
    minm = min(minm,num[i]);
    // or
    //     if(num[i]<min){
    //         min = num[i];
    //     }
    }
    return minm;
}
int main(){
    int size;
    cin>>size;
    int num[1000];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"Maximum is "<<getMax(num,size)<<endl;
    cout<<"Minimum is "<<getMin(num,size)<<endl;

}


//Array Sum
#include<iostream>
using namespace std;
int ArraySum(int arr[], int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<"Sum is "<<sum<<"."<<endl;
}
int main(){
    cout<<"Enter size of your array: "<<endl;
    int size;
    cin>>size;
    cout<<"Enter elements of array: "<<endl;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    ArraySum(arr,size);

}


