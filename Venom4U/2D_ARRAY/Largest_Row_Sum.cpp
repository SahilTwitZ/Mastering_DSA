// LARGEST ROW SUM
#include <iostream>
using namespace std;
int LargestRowSum(int arr[][4], int row, int col)
{
    int rowIndex = -1;
    int maxi = INT32_MIN;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "The maximum sum is " << maxi << endl;
    return rowIndex;
}
int main()
{
    int arr[3][4];
    cout << "Enter elements: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int ansIndex = LargestRowSum(arr, 3, 4);
    cout << "Maximum sum is at index " << ansIndex;
    return 0;
}