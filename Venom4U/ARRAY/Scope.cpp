//SCOPE

#include<iostream>
using namespace std;
void Update(int arr[], int n){
    cout<<"Inside the function"<<endl;

    //arr[0] = 20;

    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    cout<<"Going back to main function"<<endl;
}
int main(){
    int arr[3] = {2,3,5};
    Update(arr,3);

    //arr[0] = 25;
    cout<<"Printing in main function"<<endl;        
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }

}