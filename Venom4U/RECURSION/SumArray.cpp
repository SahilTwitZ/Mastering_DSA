#include <iostream>
using namespace std;

int getSum(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return arr[0];
    }

    int RecReln = getSum(arr + 1, n - 1);
    return arr[0] + RecReln;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 50};
    int ans = getSum(arr, 5);
    cout << ans << endl;
}