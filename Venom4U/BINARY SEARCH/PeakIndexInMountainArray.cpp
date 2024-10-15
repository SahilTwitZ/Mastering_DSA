// Q-Peak Index in a Mountain Array:

#include <iostream>
using namespace std;
int peakIndexInMountainArray(int arr[], int n)
{
    int s = 0;
    int e = n - 1;

    int m = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[m] < arr[m + 1])
        {
            s = m + 1;
        }
        else
        {
            e = m;
        }

        m = s + (e - s) / 2;
    }
    return s;
}
int main()
{

    int arr[5] = {1, 2, 3, 5, 0};
    cout << "Peak Index in a Mountain Array is : " << peakIndexInMountainArray(arr, 5) << endl;
    int index = peakIndexInMountainArray(arr, 5);
    cout << "Peak element is : " << arr[index];

    return 0;
}
