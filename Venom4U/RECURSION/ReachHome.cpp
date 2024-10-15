#include<iostream>
using namespace std;

void reachHome(int src, int dest){

    cout<<"Source is: "<<src<<" and destination is: "<<dest<<endl;
    //base case:
    if(src==dest){
        cout<<"Reached home"<<endl;
        return ;
    }

    //recursive relation/call
    reachHome(src+1,dest);
}
int main(){
    int src = 1;
    int dest = 10;

    reachHome(src,dest);
}