#include <iostream>
using namespace std;

int main(){
	int h1, m1, h2, m2;
	cin >> h1 >> m1 >> h2 >> m2;
	
	int t1 = h1*60+m1;
	int t2 = h2*60+m2;
	int t3 = ((t2+60*24) - t1)%(60*24);
	cout << t3/60 << " hr " << t3%60 << " min until alarm rings.";
}