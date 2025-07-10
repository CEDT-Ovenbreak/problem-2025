#include <iostream>
using namespace std;

int main(){
    int temperature;
    cin >> temperature;
    if(temperature < 160) cout << "Undercooked";
    else if(temperature >= 160 && temperature <= 180) cout << "Perfect";
    else cout << "Burnt";
}