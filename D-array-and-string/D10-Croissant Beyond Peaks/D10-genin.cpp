#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

typedef long long ll;

const int MAX_Q = 1000;
const int MAX_N = 500;
const int MIN_N = 1;

pair<string, string> solve(int n, bool flg) {
    string s(n, '.');
    string s2(n, '.');
    if (flg) {
        int sPos = rnd.next(1, n) - 1;
        int tPos = rnd.next(1, n) - 1;
        bool flg = true, flg2 = true;
        for (int i = 0; i < n; i++) {
            if (flg && flg2) {
                if (rnd.next(1, 2) == 1) {
                    s[i] = '.';
                    s2[i] = '#';
                    flg = true, flg2 = false;
                }
                else if (rnd.next(1, 2) == 1) {
                    s[i] = '#';
                    s2[i] = '.';
                    flg = false, flg2 = true;
                }
                else {
                    s[i] = s2[i] = '.';
                    flg = true, flg2 = true;
                }
            }
            else if (flg) {
                if (rnd.next(1, 4) <= 3) {
                    s[i] = '.';
                    s2[i] = '#';
                    flg = true, flg2 = false;
                }
                else {
                    s[i] = s2[i] = '.';
                    flg = true, flg2 = true;
                }
            }
            else if (flg2) {
                if (rnd.next(1, 4) <= 3) {
                    s[i] = '#';
                    s2[i] = '.';
                    flg = false, flg2 = true;
                }
                else {
                    s[i] = s2[i] = '.';
                    flg = true, flg2 = true;
                }
            }
        }
        if (sPos == tPos) {
            if (rnd.next(0, 1) == 0) {
                s[sPos] = 'S';
                s2[tPos] = 'T';
            }
            else {
                s[sPos] = 'T';
                s2[tPos] = 'S';
            }
        }
        else if (rnd.next(1, 2) == 1) {
            s[sPos] = 'S';
            s[tPos] = 'T';
        }
        else if (rnd.next(1, 2) == 1) {
            s2[sPos] = 'S';
            s2[tPos] = 'T';
        }
        else if (rnd.next(1, 2) == 1) {
            s[sPos] = 'S';
            s2[tPos] = 'T';
        }
        else {
            s[sPos] = 'T';
            s2[tPos] = 'S';
        }
    }
    else {
        for (int i = 0; i < n; ++i) {
            if (rnd.next(1, 10) <= 2) {
                s[i] = '#';
            }
            if (rnd.next(1, 10) <= 2) {
                s2[i] = '#';
            }
        }
        int rng = rnd.next(1, 4);
        int sPos = rnd.next(1, n) - 1;
        int tPos = rnd.next(1, n) - 1;
        while (tPos == sPos) {
            tPos = rnd.next(1, n) - 1;
        }
        if (rng == 1) {
            s[sPos] = 'S';
            s[tPos] = 'T';
        }
        else if (rng == 2) {
            s2[sPos] = 'S';
            s2[tPos] = 'T';
        }
        else if (rng == 3) {
            s[sPos] = 'S';
            s2[tPos] = 'T';
        }
        else {
            s[sPos] = 'S';
            s2[tPos] = 'T';
        }
    }
    return {s, s2};
}

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    for (int t = 1; t <= 10; t++) {
        string tc = to_string(t) + ".in";
        freopen(tc.c_str(), "w", stdout);

        ll temp = rnd.next(1874);
        for (int i = 1; i < temp; i++) {
            rnd.next(i);
            rnd.next(i, i);
        }
        
        int q = rnd.next(900, MAX_Q);

        cout << q << endl;
        for (int i = 0; i < q; ++i) {
            int n = rnd.next(2, (t >= 1 && t <= 4 ? 10 : MAX_N));
            auto [s, s2] = solve(n, rnd.next(1, 10) <= 7);
            cout << n << endl << s << endl << s2 << endl;
        }
    }
    return 0;
}
