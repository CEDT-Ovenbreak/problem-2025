#include <iostream>
using namespace std;

int main(){
    double targetWeight, realWeight;
    char unit;
    cin >> targetWeight >> unit >> realWeight;
    if(unit == 'k'){
        targetWeight *= 1000;
    } else if (unit == 't'){
        targetWeight *= 1000000;
    }
    if(targetWeight == realWeight){
        cout << "Perfect";
    } else if(realWeight <= targetWeight * 1.05 && realWeight >= targetWeight * 0.95){
        cout << "Pretty Good";
    } else if(realWeight < targetWeight * 0.95){
        cout << "Add More";
    } else{
        cout << "Too Much";
    }
}