// #include <iostream>

// void bubbleSort(int arr[], int size)
// {
//     bool swapped;
//     for (int i = 0; i < size - 1; i++)
//     {
//         swapped = false;
//         for (int j = 0; j < size - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 // Swap arr[j] and arr[j+1]
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//                 swapped = true;
//             }
//         }

//         // If no two elements were swapped in the inner loop, the array is already sorted
//         if (!swapped)
//         {
//             break;
//         }
//     }
// }

// int main()
// {
//     int arr[] = {11, 12, 22, 25, 34, 64, 90}; // Already sorted
//     int size = sizeof(arr) / sizeof(arr[0]);

//     std::cout << "Original array: ";
//     for (int i = 0; i < size; i++)
//     {
//         std::cout << arr[i] << " ";
//     }
//     std::cout << std::endl;

//     bubbleSort(arr, size);

//     std::cout << "Sorted array: ";
//     for (int i = 0; i < size; i++)
//     {
//         std::cout << arr[i] << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }
