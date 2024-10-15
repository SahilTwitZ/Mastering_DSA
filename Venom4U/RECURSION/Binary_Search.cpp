#include <iostream>
using namespace std;

// void print(int arr[], int s, int e){
//     for(int i=s; i<=e; i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }

bool BS(int *arr, int s, int e, int k)
{
    // print(arr,s,e);
    int mid = s + (e - s) / 2;
    if (s > e)
    {
        return 0;
    }

    if (arr[mid] == k)
    {
        return 1;
    }

    if (arr[mid] > k)
    {
        return BS(arr, s, mid - 1, k);
    }
    else
    {
        return BS(arr, mid + 1, e, k);
    }
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 7, 8, 9, 23, 123, 1345};
    int k = 10;
    bool ans = BS(arr, 0, 9, k);
    if (ans)
    {
        cout << "Present";
    }
    else
    {
        cout << "Not Present";
    }
}