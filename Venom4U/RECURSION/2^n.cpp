// #include<iostream>
// using namespace std;

// int power_2(int n){
//     //base case
//     if(n==0)
//     return 1;

//     //recursive relation
//     return 2*power_2(n-1);

// }
// int main(){
//     int n;
//     cin>>n;
//     int ans = power_2(n);
//     cout<<ans<<endl;
// }

#include <iostream>
using namespace std;

bool power_2(int n)
{
    if (n <= 0)
    {
        return false;
    }
    if (n == 1)
    {
        return true;
    }
    if (n % 2 != 0)
    {
        return false;
    }
    return power_2(n / 2);
}

int main()
{
    int n;
    cin >> n;
    bool ans = power_2(n);
    if (ans)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}