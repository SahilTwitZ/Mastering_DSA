#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int k)
{
    if (n == 0)
    {
        return 0;
    }
    if (arr[0] == k)
    {
        return 1;
    }
    else
    {
        bool ans = linearSearch(arr + 1, n - 1, k);
        return ans;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 34, 4};
    int k = 30;
    bool ans = linearSearch(arr, 5, k);
    if (ans)
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Not Present";
    }
}