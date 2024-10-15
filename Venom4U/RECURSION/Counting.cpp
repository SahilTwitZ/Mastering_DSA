// #include<iostream>
// using namespace std;

// void Counting(int n){
//     if(n==0){
//         return;
//     }

//     cout<<n<<" ";
//     Counting(n-1); //tail recursion
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<endl;

//     Counting(n);
// }

#include <iostream>
using namespace std;

void Counting(int n)
{
    if (n == 0)
    {
        return;
    }
    Counting(n - 1); // head recursion
    cout << n << " ";
}
int main()
{
    int n;
    cin >> n;
    cout << endl;

    Counting(n);
}