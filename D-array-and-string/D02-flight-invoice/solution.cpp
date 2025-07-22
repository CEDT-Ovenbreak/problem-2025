#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin >> n;
	int land[n], take[n];
	//input airport costs
	for(int i=0;i<n;i++){
		cin >> land[i] >> take[i];
	}
	
	//no. of airports gusini lands on
	cin >> m;
	int cost = 0;
	for(int i=0;i<m;i++){
		int ap;
		cin >> ap;
		if(i==0){ //first airport takeoff
			cost += take[ap-1];
			cout << "T" << ap << ": " << take[ap-1] << " " << endl;
		}
		else if(i==m-1){ //last airport landing
			cost += land[ap-1];
			cout << "L" << ap << ": " << land[ap-1] << " " << endl;
		}
		else{ //other airport
			cost += take[ap-1] + land[ap-1];
			cout << "L" << ap << ": " << land[ap-1] << " " << endl;
			cout << "T" << ap << ": " << take[ap-1] << " " << endl;
		}
	}
	cout << "Total : " << cost;
}
