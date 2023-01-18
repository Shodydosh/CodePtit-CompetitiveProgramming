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
        int cnt = 0;
        char tmp = s[0];
        string ans = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == tmp)
                cnt++;
            else
            {
                ans += tmp;
                ans += to_string(cnt);
                tmp = s[i];
                cnt = 1;
            }
        }
        if (cnt != 0)
        {
            ans += tmp;
            ans += to_string(cnt);
        }

        cout << ans << endl;
    }
}
