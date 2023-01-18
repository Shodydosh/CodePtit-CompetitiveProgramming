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
        sort(s.begin(), s.end());
        while (s[0] == '0')
            s.erase(0, 1);
        cout << s << endl;
    }
}
