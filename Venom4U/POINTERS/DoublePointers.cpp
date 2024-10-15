// #include<iostream>
// using namespace std;
// int main(){
// int i = 5;
// int *ptr = &i;
// int **ptr2 = &ptr;   //Double Pointer

// cout<<"Printing ptr "<<ptr<<endl;
// cout<<&i<<endl;
// cout<<"* of ptr2 "<<*ptr2<<endl;  //same as ptr

// cout<<endl;

// cout<<"Address of ptr "<<&ptr<<endl;
// cout<<ptr2<<endl;

// cout<<endl;

// cout<<i<<endl;
// cout<<*ptr<<endl;
// cout<<**ptr2<<endl;

// cout<<endl;

// }


#include<iostream>
using namespace std;

void update(int **p2){
    // p2 = p2+1; //ku6 change hoga p2= p2+1 se ya nhi hoga -- NO

    // *p2 = *p2+1; //ku6 change hoga *p2= *p2+1 se ya nhi hoga -- YES p

    **p2 = **p2+1;  //ku6 change hoga **p2= **p2+1 se ya nhi hoga --YES i
}
int main(){
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout<<"Before: "<<i<<endl;
    cout<<"Before: "<<p<<endl;
    cout<<"Before: "<<p2<<endl;

    update(p2);

    cout<<"After: "<<i<<endl;
    cout<<"After: "<<p<<endl;
    cout<<"After: "<<p2<<endl;
}


//MCQs
#include<iostream>
using namespace std;
int main(){
    // int first = 8;
    // int second = 18;
    // int *ptr = &second;
    // *ptr = 9;
    // cout<< first <<" "<<second <<endl;


    // int first = 6;
    // int *p = &first;
    // int *q = p;
    // (*q)++;
    // cout<<first<<endl;


    // int first = 8;
    // int *p = &first;
    // cout<< (*p)++ <<" ";
    // cout<<first<<endl;


    // int *p = 0;
    // int first = 110;
    // *p = first;
    // cout<<*p<<endl;


    // int first = 8;
    // int second = 11;
    // int *third = &second;
    // first = *third;
    // *third = *third+2;
    // cout<<first<<" "<<second <<endl;


    // float f = 12.5;
    // float p =21.5;
    // float *ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    // cout<<*ptr<<" "<<f<<" "<<p<<endl;



    // int arr[5];
    // int *ptr;
    // cout<<sizeof(arr)<<" "<<sizeof(ptr)<<endl;



    // int arr[] = {11,21,13,14};
    // cout<<*(arr)<<" "<<*(arr+1)<<endl;



    // int arr[6] = {11,12,31};
    // cout<<arr<<" "<<&arr<<endl;


    // int arr[6] = {11,21,13};
    // cout<<(arr+1)<<endl;



    // int arr[6] = {11,21,31};
    // int *p = arr;
    // cout<<p[2]<<endl;// p[2] == *(p+2)


    // int arr[] = {11,12,13,14,15};
    // cout<<*(arr)<<" "<<*(arr+3);



    // int arr[] = {11,21,31,41};
    // int *ptr = (arr)++;   //ERROR
    // cout<<*ptr<<endl;


    // char ch = 'a';
    // char *ptr = &ch;
    // ch++;
    // cout<<*ptr<<endl;


    // char arr[] = "Abcde";
    // char *p = &arr[0];
    // cout<<p<<endl;



    // char arr[]  =  "abcde";
    // char *p = &arr[0];
    // p++;
    // cout<<p<<endl;


    // char str[] = "babbar";
    // char *p = str;
    // cout<<str[0]<<" "<<p[0]<<endl;
 
}


