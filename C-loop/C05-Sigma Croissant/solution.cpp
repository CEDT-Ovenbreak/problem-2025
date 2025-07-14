#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll n;
    cin >> n;
	ll sum = 0, fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
        sum += fact;
    }
    cout << sum << "\n";
	return 0;
}