// SEARCHING AN ELEMENT
#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 910, 11, 12};
    int target;
    cout << "Enter target: ";
    cin >> target;

    if (isPresent(arr, target, 3, 4))
    {
        cout << "Yes target is present";
    }
    else
    {
        cout << "No target not found";
    }
}