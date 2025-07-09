#include <iostream>
#include <string>
#include <cmath>
using namespace std;
typedef long long ll;

ll power(ll a, ll x)
{
    ll res = 1;
    for (int i = 0; i < x; i++)
        res *= a;
    return res;
}
ll count(ll x)
{
    ll ans = 0;
    string num = to_string(x);
    for (int i = 1; i < num.length(); i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            ans += power(j, i - 1);
        }
    }
    ll ub = num[0] - '0';
    for (int i = 1; i < ub; i++)
    {
        ans += power(i, num.length() - 1);
    }
    bool flag = true;
    for (int i = 1; i < num.length(); i++)
    {
        ll d = num[i] - '0';
        if (d >= ub)
        {
            ans += ub * power(ub, num.length() - i - 1);
            flag = false;
            break;
        }
        ans += d * power(ub, num.length() - i - 1);
    }
    if (flag)
        ans++;
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        cout << count(r) - count(l - 1) << endl;
    }
}
