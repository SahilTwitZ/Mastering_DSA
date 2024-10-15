// REV A NUMBER
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    while (n != 0)
    {
        int digit = n % 10;
        ans = ans * 10 + digit;
        n = n / 10;
    }
    if ((ans > INT32_MAX / 10) || (ans < INT32_MIN / 10))
        cout << 0 << endl;
    else
    {
        cout << "Reverse: " << ans << endl;
    }
}

// COMPLEMENT OF BASE 10 INTEGER(Important)

// REVERSE AN ARRAY
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 4};
    reverse(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

//MERGE TWO SORTED ARRAY
#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void merge(int arr1[], int n1, int arr2[], int n2, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    while (i < n1)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    while (j < n2)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[3] = {1, 5, 9};
    int arr3[8] = {0};

    merge(arr1, 5, arr2, 3, arr3);
    printArr(arr3, 8);
}