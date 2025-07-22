#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int k = 2;
	int ans = 0;
	while(n>1){
		while(n%k==0){
			n /= k;
			ans += k;
		}
		k++;
	}
	cout << ans;
}
