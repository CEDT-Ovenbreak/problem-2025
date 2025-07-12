#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void mains() {
    ll n;
    string s, s2;
    cin >> n >> s >> s2;
    bool st = false;
    bool flg = true, flg2 = true;
    for (int i = 0; i < n; i++) {
        if ((s[i] == 'S' || s[i] == 'T') && (s2[i] == 'S' || s2[i] == 'T')) {
            cout << "Yes\n";
            return;
        }
        if (!st && (s[i] == 'S' || s[i] == 'T' || s2[i] == 'S' || s2[i] == 'T')) {
            st = true;
            flg = (s[i] != '#');
            flg2 = (s2[i] != '#');
            continue;
        }
        if (!st) {
            continue;
        }
        if (s[i] == '#' && s2[i] == '#') {
            cout << "No\n";
            return;
        }
        else if (s[i] != '#' && s2[i] != '#') {
            flg = true;
            flg2 = true;
        }
        else if (s[i] != '#') {
            if (!flg) {
                cout << "No\n";
                return;
            }
            flg = true;
            flg2 = false;
        }
        else if (s2[i] != '#') {
            if (!flg2) {
                cout << "No\n";
                return;
            }
            flg = false;
            flg2 = true;
        }
        if ((flg && (s[i] == 'S' || s[i] == 'T')) || (flg2 && (s2[i] == 'S' || s2[i] == 'T'))) {
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
}

int main(){
    ll t = 1;
    cin >> t;
    while (t--) {
        mains();
    }
	return 0;
}