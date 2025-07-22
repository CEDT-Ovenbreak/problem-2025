#include <iostream>
#include <string>
typedef long long ll;
using namespace std;

//Attack Range
int main(){
	ll minRange, maxRange;
	string name;
	cin >> name >> minRange >> maxRange;
	
	ll maxAttackTiles = maxRange*(maxRange+1)/2 * 4;
	ll cannotAttackTiles = (minRange-1)*(minRange)/2 * 4;
	ll totalAttackTiles = maxAttackTiles - cannotAttackTiles;
	
	cout << name << " has " << totalAttackTiles << " attackable tiles.";
}