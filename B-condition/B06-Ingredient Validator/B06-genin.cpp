#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

typedef long long ll;

const ll minn = 1;
const ll maxn = 100;
const ll mina = 1;
const ll maxa = 255;

vector<tuple<string, string, string>> accepted = {
    {"spring", "full", "honey"},
    {"spring", "new", "chocolate"},
    {"autumn", "new", "milk"},
    {"winter", "waning", "chocolate"},
    {"autumn", "waxing", "oil"}
};

vector<tuple<string, string, string>> rejected = {
    {"spring", "full", "butter"},
    {"summer", "new", "butter"},
    {"autumn", "new", "honey"},
    {"monsoon", "full", "milk"},
    {"winter", "new", "oil"}
};

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    for (int t = 1; t <= 10; t++) {
        string tc = to_string(t) + ".in";
        freopen(tc.c_str(), "w", stdout);

        ll temp = rnd.next(5187);
        for (int i = 1; i < temp; i++) {
            rnd.next(i);
            rnd.next(i, i);
        }

        if (t <= 5) {
            auto [s, m, i] = accepted[t - 1];
            cout << s << " " << m << " " << i << "\n";
        }
        else {
            auto [s, m, i] = rejected[t - 6];
            cout << s << " " << m << " " << i << "\n";
        }
    }
    return 0;
}
