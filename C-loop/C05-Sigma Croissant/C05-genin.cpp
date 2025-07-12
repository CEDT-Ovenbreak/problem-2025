#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

typedef long long ll;

const ll minn = 1;
const ll maxn = 100;
const ll mina = 1;
const ll maxa = 255;

int main() {
    for (int t = 1; t <= 10; t++) {
        string tc = to_string(t) + ".in";
        freopen(tc.c_str(), "w", stdout);

        ll temp = rnd.next(5187);
        for (int i = 1; i < temp; i++) {
            rnd.next(i);
            rnd.next(i, i);
        }
        
        cout << 2 * t - (rnd.next(0, 1)) << "\n";
    }
    return 0;
}
