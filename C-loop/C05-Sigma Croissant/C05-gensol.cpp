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
        ll sum = 0, fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
            sum += fact;
        }
        cout << sum << "\n";
    }
    return 0;
}