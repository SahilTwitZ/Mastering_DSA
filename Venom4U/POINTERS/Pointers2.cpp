// #include <iostream>
// using namespace std;
// int main()
// {
    //     int arr[10] = {2,4,6,7,8,9,6,5,3,4};
    //     cout<<"Address of first memory block is "<<arr<<endl;

    //     cout<<"Address of first memory block is "<<&arr[0]<<endl;

    //     cout<<"Value at 0th index "<<*arr<<endl;
    //     cout<<"Value at 0th index + 1 : "<<*arr + 1<<endl;
    //     cout<<"Value at 1st index "<<*(arr+1)<<endl;

    // //Hahaha dekh beta
    //     int i = 3;
    //     cout<<i[arr]<<endl;
    //     cout<<*(i+arr)<<endl;

    // int temp[10];
    // cout<<"10 x 4 : "<<sizeof(temp)<<endl;

    // int *ptr = &temp[0];
    // cout<<"Address size : "<<sizeof(ptr)<<endl;
    // cout<<sizeof(*ptr)<<endl;
    // cout<<sizeof(&ptr)<<endl;

    // int a[20] = {1,2,3,5};
    // cout<< &a[0] <<endl;
    // cout<< &a <<endl;
    // cout<< a <<endl;

    // int *p = &a[0];
    // cout<<&p<<endl;

    //     int arr[10];
    //   //arr = arr+1;     // ERROR

    //     int *ptr  = &arr[0];
    //     cout<<ptr<<endl;
    //     ptr = ptr+1;
    //     cout<<ptr<<endl;
// }

// // CHARACTER ARRAYS:
// #include <iostream>
// using namespace std;
// int main()
// {

    // int arr[5] = {1,2,3,4,5};
    // char ch[6] = "abcde";

    // cout<<arr<<endl;
    // //prints entire string
    // cout<<ch<<endl;

    // char *c = &ch[0];
    // //prints entire string
    // cout<<c<<endl;

    // char temp = 'z';
    // char *p = &temp;
    // cout<<p<<endl; // jab tak null character nhi milta tb tk print krega
// }

// FUNCTIONS
#include <iostream>
using namespace std;

// void print(int *p)
// {
//     cout << *p << endl;
// }

void update(int *p)
{
    // p = p + 1;
    // cout << "Inside : " << p << endl;
    *p = *p+1;
}

int main()
{
    int value = 5;
    int *p = &value;
    // print(p);
    // cout<<endl;

    // cout << "Before : " << p << endl;
    // update(p);
    // cout << "After : " << p << endl;
    cout << "Before : " << *p << endl;
    update(p);
    cout << "After : " << *p << endl;
}
