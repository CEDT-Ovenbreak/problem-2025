#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

/*
given s(n) = f(n + 2) - 1, s(n) = s(n - 1) + f(n) then

s(n + 1) = s(n) + f(n + 1)
s(n + 1) = (f(n + 2) - 1) + f(n + 1)
s(n + 1) = f(n + 2) + f(n + 1) - 1
s(n + 1) = f(n + 3) - 1 #
*/

int main(){
    ll n;
    cin >> n;
    ll a = 0, b = 1, c;
	for (int i = 2; i <= n + 2; i++) {
        c = a + b;
        a = b, b = c;
    }
    cout << c - 1 << "\n";
	return 0;
}