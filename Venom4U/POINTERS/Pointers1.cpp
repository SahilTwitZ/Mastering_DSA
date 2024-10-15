#include <iostream>
using namespace std;
int main(){
    // int num = 5;
    // cout<<num<<endl;

//    // address of operator &

    // cout<<"Address of num is "<<&num<<endl;    //printing address using &

    // int *ptr = &num; //declare a pointer
    // cout<<"Address is "<<ptr<<endl;   //printing address using pointer
    // cout<<"Value is : "<<*ptr<<endl;  //print same as num value


    // double d = 4.5;
    // double *ptr2 = &d;
    // cout<<"Address is "<<ptr2<<endl;   //printing address using pointer
    // cout<<"Value is : "<<*ptr2<<endl;  //print same as num value
    // cout<<"Size of integer is "<<sizeof(num)<<endl;
    // cout<<"Size of pointer is "<<sizeof(ptr)<<endl;
    // cout<<"Size of pointer is "<<sizeof(ptr2)<<endl;

    // int *ptr3 = 0;
    // cout<<*ptr3<<endl;

// //other way to initialize pointer
//     int i = 5;
//     int *ptr4 = 0;
//     ptr4 = &i;
//     cout<<ptr4<<endl;
//     cout<<*ptr4<<endl;


//        int a = 5;
//        int b = a;
//        cout<<"Before a = : "<<a<<endl;
//        cout<<"Before b = : "<<b<<endl;
//        b++;
//        cout<<"After a = : "<<a<<endl;
//        cout<<"After b = : "<<b<<endl;

//        int num = 5;
//        int *p = &num;
//        cout<<"Before num = : "<<num<<endl;
//        (*p)++;
//        cout<<"After num = : "<<num<<endl;

// //copying a pointer
//        int *q = p;
//        cout<<p<<" - "<<q<<endl;
//        cout<<*p<<" - "<<*q<<endl;


//important concept
int i = 3;
int *t  = &i;
//cout<<(*t)++<<endl;
*t =  *t+1;
cout<<*t<<endl;
cout<<"t before t = t+1 : "<<t<<endl;
t = t+1;
cout<<"t after t = t+1 : "<<t<<endl;
    return 0;
}