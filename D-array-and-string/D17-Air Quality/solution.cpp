#include <iostream>
using namespace std;

int main(){
	int n, m, a, b;
	cin >> n >> m;
	int dust[n][m];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cin >> dust[i][j];
	}
	cin >> a >> b;
	
	int good = 0;
	int mid = 0;
	int bad = 0;
	int maxd = 0;
	int mind = INT_MAX;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int d = dust[i][j];
			maxd = max(maxd, d);
			mind = min(mind, d);
			if(d<a) good++;
			else if(d<b) mid++;
			else bad++;
		}
	}
	
	cout << "Good: " << good
		<< "\nDecent: " << mid
		<< "\nBad: " << bad
		<< "\nMin: " << mind
		<< "\nMax: " << maxd;
}