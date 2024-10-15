// Q-Pivot in an sorted rotated array:

#include <iostream>
using namespace std;

int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;

    int m = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[m] >= arr[0])
        {
            s = m + 1;
        }
        else
        {
            e = m;
        }
        m = s + (e - s) / 2;
    }
    return s; // or return e;
}
int main()
{
    cout << "Enter size of array: " << endl;
    int n;
    cin >> n;

    cout << "Enter array: " << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Pivot is at " << getPivot(arr, n);
}