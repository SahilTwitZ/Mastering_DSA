// Q-Square root using binary search:

#include <iostream>
using namespace std;

int SquareRoot(int n)
{
    int s = 0;
    int e = n;
    int ans = -1;

    while (s <= e)
    {
        long long int mid = s + (e - s) / 2; // Move the mid calculation inside the loop

        if (mid * mid == n)
        {
            return mid;
        }
        if (mid * mid > n)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
    }

    return ans;
}

double morePrecision(int n, int precision, int tempSol)
{

    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << " Enter the number " << endl;
    cin >> n;

    int tempSol = SquareRoot(n);
    cout << " Answer is " << morePrecision(n, 3, tempSol) << endl;

    return 0;
}