#include <iostream>
using namespace std;

bool Sorted(int *arr, int n)
{
    if (n == 1 || n == 0)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remaining_part = Sorted(arr + 1, n - 1);
        return remaining_part;
    }
}
int main()
{
    int arr[6] = {1, 2, 4, 56, 63, 22};
    int i = 0;
    bool ans = Sorted(arr, 6);
    if (ans)
    {
        cout << "Sorted" << endl;
    }
    else
    {
        cout << "Not Sorted" << endl;
    }
}