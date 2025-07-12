#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

typedef long long ll;

const ll minn = 1;
const ll maxn = 100;
const ll mina = 1;
const ll maxa = 255;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    for (int t = 1; t <= 10; t++) {
        string filename = to_string(t) + ".in";
        freopen(filename.c_str(), "w", stdout);

        ll temp = rnd.next(546);
        for (int i = 1; i < temp; i++) {
            rnd.next(i);
            rnd.next(i, i);
        }
        
        ll h = (t >= 1 && t <= 5 ? rnd.next(0, 11) : rnd.next(12, 23)), m = rnd.next(0, 59);

        cout << (h < 10 ? "0" : "") << h << " " << (m < 10 ? "0" : "") << m << "\n";
    }
    return 0;
}
