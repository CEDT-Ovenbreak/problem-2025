#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int x[n], h[n];
    for (int i=0;i<n;i++) {
        cin >> x[i];
    }
    for (int i=0;i<n;i++) {
        cin >> h[i];
    }
    for (int i=0;i<2*n-1;i++) {
        int y = 0;
        for (int k=0;k<n;k++) {
            if (i - k < 0 || i - k >= n) { continue; }
            y += x[k] * h[i - k];
        }
        cout << y << " \n"[i == 2*n-2];
    }

    return 0;
}
