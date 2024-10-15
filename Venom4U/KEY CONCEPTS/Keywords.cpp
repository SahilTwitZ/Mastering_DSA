// //MACROS-->A piece of code in a program that is replaced by value of macro.
// #include<iostream>
// using namespace std;

// #define PI 3.14 //macro(no actual space, no update)

// int main(){
//     int r = 5;
//     // double pi = 3.14; //storage used, changed by mistake
//     double area = PI*r*r;
//     cout<<"Area of circle with radius "<<r<< " is: "<<area<<endl;
// }

// // GLOBAL VARIABLES
// #include <iostream>
// using namespace std;

// // int score = 15;//global variable;

// void a(int &i)
// {
//     // cout<<score<<" in a"<<endl;
//     char ch = 'a';
//     cout << i << endl;
// }

// void b(int &i)
// {
//     //     cout<<score<<" in b"<<endl;
//     cout << i << endl;
// }

// int main()
// {
//     // cout<<score<<" in main"<<endl;
//     int i = 5;
//     a(i);
//     b(i);
//     // {
//     //     int i=2;
//     //     cout<<i<<endl;
//     // }
//     cout << i << endl;
// }

// // INLINE FUNCTIONS--> are used to reduce the function calls overhead
// #include <iostream>
// using namespace std;

// void func(int a, int b)
// {
//     a++;
//     b++;
//     cout << " " << a << " " << b << endl;
// }
// int main()
// {
//     int a = 1, b = 2;
//     func(a, b);
// }

// #include <iostream>
// using namespace std;

// inline int getMax(int &a, int &b)
// { // inline function ==> performace a6i ho rhi hai , no extra memory usage, no function call overhead
//     return (a > b) ? a : b;
// }
// int main()
// {
//     int a = 1, b = 2;
//     int ans = 0;
//     ans = getMax(a, b);
//     cout << ans << endl;

//     a = a + 3;
//     b = b + 1;
//     ans = getMax(a, b);
//     cout << ans << endl;
// }

// // DEFAULT ARGUMENTS
// #include <iostream>
// using namespace std;

// void print(int arr[], int n, int start = 0)
// { // Condition --> hmesha last parameter se start karna default banana
//     for (int i = start; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     int arr[5] = {1, 4, 7, 8, 9};
//     int size = 5;
//     print(arr, size);
//     cout << endl;
//     print(arr, size, 2);
// }