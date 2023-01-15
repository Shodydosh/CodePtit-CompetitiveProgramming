#include <bits/stdc++.h>
using namespace std;

int check(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        long long l, r, cnt = 0;
        cin >> l >> r;
        for (long long i = l; i * i <= r; i++)
        {
            if (check(i))
                cnt++;
        }
        cout << cnt << endl;
    }
}
