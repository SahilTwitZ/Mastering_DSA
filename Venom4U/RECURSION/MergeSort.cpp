#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (e + s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int mainArrayindex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayindex++];
    }

    mainArrayindex = mid + 1;
    for (int i = 0; i < len1; i++)
    {
        second[i] = arr[mainArrayindex++];
    }

    // merge two sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayindex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayindex++] = first[index1++];
        }
        else
        {
            arr[mainArrayindex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainArrayindex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArrayindex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    int mid = (s + e) / 2;
    // left part solve krna h
    mergeSort(arr, s, mid);

    // right part solve krna hai
    mergeSort(arr, mid + 1, e);

    // merge
    merge(arr, s, e);
}
int main()
{
    int arr[5] = {2, 5, 1, 6, 9};
    int n = 5;
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Complexity Analysis of Merge Sort:
// Time Complexity: O(N log(N)),
// Merge Sort is a recursive algorithm and time complexity can be expressed as following recurrence relation.

// T(n) = 2T(n/2) + θ(n)

// The above recurrence can be solved either using the Recurrence Tree method or the Master method.
// It falls in case II of the Master Method and the solution of the recurrence is θ(Nlog(N)). The time complexity of Merge Sort isθ(Nlog(N))
// in all 3 cases (worst, average, and best) as merge sort always divides the array into two halves and takes linear time to merge two halves.

// Auxiliary Space: O(N), In merge sort all elements are copied into an auxiliary array.
// So N auxiliary space is required for merge sort.


// Applications of Merge Sort:
// Sorting large datasets: Merge sort is particularly well-suited for sorting large datasets due to its guaranteed worst-case time complexity of O(n log n).
// External sorting: Merge sort is commonly used in external sorting, where the data to be sorted is too large to fit into memory.
// Custom sorting: Merge sort can be adapted to handle different input distributions, such as partially sorted, nearly sorted, or completely unsorted data.
// Inversion Count Problem


// Advantages of Merge Sort:
// Stability: Merge sort is a stable sorting algorithm, which means it maintains the relative order of equal elements in the input array.
// Guaranteed worst-case performance: Merge sort has a worst-case time complexity of O(N logN), which means it performs well even on large datasets.
// Parallelizable: Merge sort is a naturally parallelizable algorithm,
// which means it can be easily parallelized to take advantage of multiple processors or threads.



// Drawbacks of Merge Sort:
// Space complexity: Merge sort requires additional memory to store the merged sub-arrays during the sorting process.
// Not in-place: Merge sort is not an in-place sorting algorithm, which means it requires additional memory to store the sorted data.
// This can be a disadvantage in applications where memory usage is a concern.
// Not always optimal for small datasets: For small datasets, Merge sort has a higher time complexity than some other sorting algorithms,
// such as insertion sort. This can result in slower performance for very small datasets.