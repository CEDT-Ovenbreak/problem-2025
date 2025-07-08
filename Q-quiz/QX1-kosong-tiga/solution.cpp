#include<bits/stdc++.h>
using namespace std;

int main() {
    int mode;
    cin >> mode;
    if (mode == 1) {
        double price;
        int amount;
        cin >> price >> amount;
        cout << floor(price * amount);
    } else if (mode == 2) {
        float score;
        cin >> score;
        if (score >= 85 && score <= 100) {
            cout << "A";
        } else if (score >= 80 && score <= 84) {
            cout << "B+";
        } else if (score >= 75 && score <= 79) {
            cout << "B";
        } else if (score >= 70 && score <= 74) {
            cout << "C+";
        } else if (score >= 65 && score <= 69) {
            cout << "C";
        } else if (score >= 60 && score <= 64) {
            cout << "D+";
        } else if (score >= 50 && score <= 59) {
            cout << "D";
        } else if (score >= 0 && score < 50) {
            cout << "F";
        } else {
            cout << "???";
        }
    } else if (mode == 3) {
        long n;
        cin >> n;
        for (long i=1; i<=n; i++) {
            for (long j=1; j<=i; j++) {
                cout << "*";
            }
            if (i%3 == 0 || i%11 == 0) {
                cout << " Ti amo";
            }
            cout << endl;
        }
    } else if (mode == 4) {
        int n; cin >> n;
        int cnt = 0;
        int a[n];
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        int j; cin >> j;
        for (int i=0; i<n; i++) {
            if (a[i] == j) {
                cnt++;
            }
        }
        cout << cnt;
    } else {
        cout << "UwU"; // Please ignore it T-T
    }
    return 0;
}