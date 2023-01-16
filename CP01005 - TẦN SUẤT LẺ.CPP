#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        long long ans;
        int check = 0;
        for (int i = 0; i < n; i += 2)
        {
            if (a[i] != a[i + 1])
            {
                ans = a[i];
                check = 1;
                break;
            }
        }
        if (check)
            cout << ans;
        else
            cout << a[n - 1];
        cout << endl;
    }
}
