#include<bits/stdc++.h>
using namespace std;

int main(){
	int row;
	int col;
	char dart;
	int rowd;
	int cold;
	cin >> row >> col;
	int array[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin >> array[i][j];
		}
	}
	cin >> rowd >> cold;
	int sum=0;
	rowd--;
	cold--;
	for(int i=0;i<row;i++){
		sum = sum + array[i][cold];
	}
	for(int j=0;j<col;j++){
		sum = sum + array[rowd][j];
	}
	sum = sum-array[rowd][cold];
	cout << sum;
}