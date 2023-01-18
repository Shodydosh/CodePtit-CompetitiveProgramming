#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

long long lcm(long long a, long long b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while (t--)
    {
        long long s;
        cin >> s;
        string tmp = to_string(s);
        if (tmp.size() % 2 == 1)
        {
            cout << "INVALID" << endl;
        }
        else
        {
            cout << lcm(stoll(tmp.substr(0, tmp.size() / 2)), stoll(tmp.substr(tmp.size() / 2, tmp.size() / 2))) << endl;
            /* Calculating the LCM of the two numbers. */
        }
    }
}
