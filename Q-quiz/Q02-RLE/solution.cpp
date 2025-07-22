#include <iostream>
#include <string>
using namespace std;

int main(){
	string text;
	cin >> text;
	
	if(text[0]>='0' && text[0]<='9'){
		//If input RLE
		for(int i=0;i<text.length();i+=2){
			int cnt = text[i]-'0';
			char ch = text[i+1];
			for(int j=0;j<cnt;j++)
				cout << ch;
		}
	}
	else{
		//If input as word
		int cnt = 1;
		for(int i=1;i<text.length();i++){
			if(text[i-1] == text[i]){
				cnt++;
			}
			else{
				cout << cnt << text[i-1];
				cnt = 1;
			}
		}
		cout << cnt << text[text.length()-1];
	}
}