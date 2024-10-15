#include <iostream>

void insertionSort(int arr[], int size)
{
    // Loop through each element starting from the second element (index 1)
    for (int i = 1; i < size; ++i)
    {
        int key = arr[i]; // Store the current element to be inserted at the right position
        int j = i - 1;    // Index of the previous element

        // Move elements of arr[0..i-1] that are greater than key to one position ahead of their current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j]; // Shift the element to the right
            j--;
        }

        arr[j + 1] = key; // Place the key at its correct position in the sorted part
    }
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    insertionSort(arr, size);

    std::cout << "Sorted array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
