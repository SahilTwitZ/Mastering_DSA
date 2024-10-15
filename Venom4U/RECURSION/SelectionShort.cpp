#include <iostream>
#include <vector>

using namespace std;

int findMinIdx(vector<int> &arr, int start)
{
    int minIdx = start;
    for (int i = start + 1; i < arr.size(); i++)
    {
        if (arr[i] < arr[minIdx])
        {
            minIdx = i;
        }
    }
    return minIdx;
}

void selectionSort(vector<int> &arr, int idx)
{
    if (idx == arr.size() - 1)
    {
        return;
    }
    else
    {
        int minIdx = findMinIdx(arr, idx);
        if (minIdx != idx)
        {
            swap(arr[idx], arr[minIdx]);
        }
        selectionSort(arr, idx + 1);
    }
}

int main()
{
    vector<int> arr = {64, 25, 12, 22, 11};
    selectionSort(arr, 0);
    cout << "Sorted: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
