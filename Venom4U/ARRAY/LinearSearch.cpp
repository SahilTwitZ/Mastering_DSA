// //LINEAR SEARCH
#include<iostream>
using namespace std;
bool SearchKey(int arr[], int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[50] = {1,2,3,4,5,7,5,34,2,4,5,6,4,3,4,5,6,7,8,6,5,4,5,6,67,8,87};
    cout<<"Enter key value to search for..."<<endl;
    int key;
    cin>>key;
    bool found = SearchKey(arr,50,key);
    if(found==true){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is not present"<<endl;
    }
}

