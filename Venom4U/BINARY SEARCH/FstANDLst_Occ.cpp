// Binary Search Questions
// Q-First and Last Occurrence

#include <iostream>
using namespace std;

int firstOcc(int nums[], int size, int k)
{
    int s = 0;
    int e = size - 1;
    int ans = -1;

    while (s <= e)
    {
        int m = s + (e - s) / 2;

        if (nums[m] == k)
        {
            ans = m;
            e = m - 1;
        }
        else if (nums[m] < k)
        {
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
    }

    return ans;
}

int lastOcc(int nums[], int size, int k)
{
    int s = 0;
    int e = size - 1;
    int ans = -1;

    while (s <= e)
    {
        int m = s + (e - s) / 2;

        if (nums[m] == k)
        {
            ans = m;
            s = m + 1;
        }
        else if (nums[m] < k)
        {
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
    }

    return ans;
}

int main()
{

    int arr[6] = {1, 2, 3, 3, 3, 6};

    cout << "First occurrence of 3 is at index " << firstOcc(arr, 6, 3) << endl;

    cout << "Last occurrence of 3 is at index " << lastOcc(arr, 6, 3) << endl;

    return 0;
}

// Total number of occurrences = ((LastOcc - FirstOcc)+1)
