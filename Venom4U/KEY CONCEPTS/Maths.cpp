// // PRIME NUMBERS OR NOT
// // TC-->O(n)
// #include <iostream>
// using namespace std;

// bool isPrime(int a)
// {
//     if (a <= 1)
//     {
//         return 0;
//     }
//     for (int i = 2; i < a; i++)
//     {
//         if (a % i == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }
// int main()
// {
//     int a;
//     cin >> a;
//     if (isPrime(a))
//     {
//         cout << "Yes it is prime" << endl;
//     }
//     else
//     {
//         cout << "No it is not prime" << endl;
//     }
// }

// // SIEVE OF ERATOSTHENES
// // TC--> O(n*log(logn))
// #include <iostream>
// #include <vector>
// using namespace std;

// // using Sieve
// void sieve(bool prime[])
// {

//     // setting TRUE for every number
//     for (int i = 2; i <= 1000000; i++)
//     {
//         prime[i] = 1;
//     }

//     for (int i = 2; i <= 1000000; i++)
//     {

//         if (prime[i])
//         {
//             // iske saare multiple mark krde - non prime
//             for (int j = 2 * i; j <= 1000000; j += i)
//             {
//                 prime[j] = 0;
//             }
//         }
//     }
//     prime[0] = prime[1] = 0;
// }

// int main()
// {

//     bool prime[1000001];
//     sieve(prime);

//     int n;
//     cin >> n;
//     while (n != -1)
//     {
//         if (prime[n])
//         {
//             cout << "It is a Prime Number" << endl;
//         }
//         else
//         {
//             cout << " It is not a Prime Number" << endl;
//         }
//         cin >> n;
//     }

//     return 0;
// }

// // GCD
// #include <iostream>
// using namespace std;

// int gcd(int a, int b)
// {

//     if (a == 0)
//         return b;

//     if (b == 0)
//         return a;

//     while (a != b)
//     {

//         if (a > b)
//         {
//             a = a - b;
//         }
//         else
//         {
//             b = b - a;
//         }
//     }
//     return a;
// }

// int main()
// {

//     int a, b;
//     cout << "Enter the Values of a and b" << endl;
//     cin >> a >> b;

//     int ans = gcd(a, b);

//     cout << " The GCD of " << a << " & " << b << " is: " << ans << endl;

//     return 0;
// }

// // FAST EXPONENTIATION
// #include <iostream>
// using namespace std;

// int fastExpo(int a, int b)
// {

//     int res = 1;

//     while (b > 0)
//     {

//         if (b & 1)
//         {
//             // odd
//             res = res * a;
//         }
//         b = b >> 1;
//         a = a * a;
//     }
//     return res;
// }

// int main()
// {

//     int a, b;
//     cout << "Enter the Values of a and b" << endl;
//     cin >> a >> b;

//     cout << "Answer is: " << fastExpo(a, b) << endl;

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// // To hold the prime numbers <= sqrt(n)
// vector<int> primes;

// // Get all the primes <= x
// // x = sqrt(n)
// void simpleSieve(int x)
// {
//     vector<bool> isPrime(x + 1, true);

//     /*
//     Making 0 and 1 as false since
//     they are not prime
//     */
//     isPrime[0] = false;
//     isPrime[1] = false;

//     // Sieve for filtering out the primes <= x
//     for (int i = 2; i * i <= x; i++)
//     {
//         if (isPrime[i])
//         {
//             // Cancelling out all the multiples of i
//             for (int m = i * i; m <= x; m += i)
//             {
//                 isPrime[m] = false;
//             }
//         }
//     }

//     // Add the primes into primes[]
//     for (int i = 2; i <= x; i++)
//     {
//         if (isPrime[i])
//         {
//             primes.push_back(i);
//         }
//     }
// }

// void segmentedSieve(int low, int high, vector<int> &ans)
// {
//     vector<int> isPrime(high - low + 1, true);

//     // Looping over all the primes
//     for (int p : primes)
//     {

//         // Choosing the first multiple of p >= low
//         int s = low / p * p;
//         if (s < low)
//         {
//             s += p;
//         }

//         // Cancelling out the factors of p
//         for (int i = s; i <= high; i += p)
//         {
//             isPrime[i - low] = false;
//         }
//     }

//     // Append primes in range [low, high] in ans
//     for (int i = 0; i < isPrime.size(); i++)
//     {
//         if (isPrime[i])
//         {
//             ans.push_back(i + low);
//         }
//     }
// }

// int main()
// {
//     primes.clear();

//     // Take input
//     int n;
//     cin >> n;

//     // Get all primes <= sqrt(n)
//     simpleSieve((int)floor(sqrt(n)));

//     vector<int> ans;

//     /*
//     divide the range [2, n-1] into
//     smaller segments of size sqrt(n),
//     use segmentedSieve to find all the
//     primes in the range [l, r] and append
//     to ans
//     */

//     // For every segment, we call segmentedSieve()
//     int updateVal = floor(sqrt(n));
//     for (int l = 2; l < n; l += updateVal)
//     {
//         int r = min(l + updateVal - 1, n - 1);
//         segmentedSieve(l, r, ans);
//     }

//     // Printing all the primes < n
//     for (int p : ans)
//     {
//         cout << p << " ";
//     }
//     cout << endl;
// }