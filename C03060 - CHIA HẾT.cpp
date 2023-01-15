#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    long long cnt = 0;
    cin >> n >> k;
    for (int i = 2; i <= n; i++)
    {
        int tmp = i;
        while (tmp % 2 == 0)
        {
            cnt++;
            tmp /= 2;
        }
    }

    if (k <= cnt)
        cout << "Yes";
    else
        cout << "No";
}
