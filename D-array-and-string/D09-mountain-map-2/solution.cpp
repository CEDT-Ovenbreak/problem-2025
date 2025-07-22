#include <bits/stdc++.h>
using namespace std;

//Mountain Map 2
int main(){
	int n; //no. of mountains
	cin >> n;
	int height[n]; //height of each mountain
	int maxh = INT_MIN;
	
	//input height and get max height
	for(int i=0;i<n;i++){
		cin >> height[i];
		maxh = max(maxh, height[i]);
	}
	
	for(int i=maxh;i>=1;i--){ //loop the layer top to bottom
		for(int j=0;j<n;j++){ //loop each mountain
			
			//print the base gap
			if(i==1) printf("_");
			else printf(" ");

			int h = height[j];
			if(h < i){
				//if height too low, print air
				for(int k=0;k<h*2;k++) cout << " ";
			}
			else{
				//print the mountain
				for(int k=0;k<i-1;k++) cout << " ";
				printf("/");
				for(int k=0;k<(h-i)*2;k++) cout << " ";
				printf("\\");
				for(int k=0;k<i-1;k++) cout << " ";
			}
			if(j==n-1 && i==1) printf("_");
			
		}
		printf("\n");
	}
}

/*
input:
5
1 3 2 4 6
output:
                              /\
                             /  \
                   /\       /    \
      /\          /  \     /      \
     /  \   /\   /    \   /        \
_/\_/    \_/  \_/      \_/          \_

*/
