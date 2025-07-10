#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int start_row = ceil(sqrt(n));
    int target_row = ceil(sqrt(x));

    int ans = 2 * (start_row - target_row);
    if (n % 2 != start_row % 2) { ans--; }

    int right_bound = n - (start_row - 1) * (start_row - 1);
    int left_bound = ( n - (start_row - 1) * (start_row - 1) ) - (start_row - target_row) * 2;
    if (n % 2 != start_row % 2) {
        right_bound--;
        left_bound++;
    }

    int target_inrow_pos = x - (target_row - 1) * (target_row - 1);
    if (target_inrow_pos < left_bound || target_inrow_pos > right_bound) {
        ans += min(abs(left_bound - target_inrow_pos), abs(right_bound - target_inrow_pos));
    } else {
        ans += (x % 2 != target_row % 2);
    }
    cout << ans << "\n";

    return 0;
}
