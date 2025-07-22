#include <bits/stdc++.h>
using namespace std;

int main(){
	int h;
	char c;
	cin >> h >> c;
	
	for(int i=h;i>=1;i--){
		for(int k=0;k<i-1;k++) cout << " ";
		printf("/");
		for(int k=0;k<(h-i)*2;k++) cout << c;
		printf("\\");
		for(int k=0;k<i-1;k++) cout << " ";
		cout << "\n";
	}
}
