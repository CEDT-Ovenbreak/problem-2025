#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    for (int t = 1; t <= 10; t++) {
        string tc = to_string(t) + ".in";
        string tc2 = to_string(t) + ".sol";
        freopen(tc.c_str(), "r", stdin);
        freopen(tc2.c_str(), "w", stdout);

        ll n;
        cin >> n;
        ll a = 0, b = 1, c;
        for (int i = 2; i <= n + 2; i++) {
            c = a + b;
            a = b, b = c;
        }
        cout << c - 1 << "\n";
    }
    return 0;
}