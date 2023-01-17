#include <bits/stdc++.h>
using namespace std;

/**
 * The maximum subarray sum is obtained by either including the previous element and the current
 * element in the sum, or just the current element itself, whichever gives a larger sum
 *
 * @param a the array of integers
 * @param size the size of the array
 *
 * @return The maximum sum of a subarray.
 */

long long maxSubArraySum(vector<long long> a, long long size)
{
    long long max_so_far = INT_MIN, max_ending_here = 0;

    for (long long i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }

    return max_so_far;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << maxSubArraySum(a, a.size()) << endl;
    }
}
