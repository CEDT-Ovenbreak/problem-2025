#include <iostream>
#include <string>
using namespace std;

int main(){
	string N;
	int q;
	
	cin >> N;
	cin >> q;
	
	while(q--){
		int l, r;
		cin >> l >> r;
		string s = N.substr(l, r-l+1);
		int i=0, j=s.length()-1;
		bool pal = true;
		while(i<j){
			if(s[i]!=s[j]){
				pal = false;
				break;
			}
			i++; j--;
		}
		cout << s << ": ";
		if(pal) cout << "Yes\n";
		else cout << "No\n";
	}
}