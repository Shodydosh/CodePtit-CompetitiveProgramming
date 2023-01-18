#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        long long ans = 1;
        for (char c : s)
        {
            if (c != '1' && c != '2' && c != '0')
            {
                ans = 0;
                break;
            }
        }
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
