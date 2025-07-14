#include <iostream>
using namespace std;

int main() {
    int speed, height, weight;

    cin >> speed >> height >> weight;

    bool isWeak = (height < 100 || weight > 200);

    if (isWeak) {
        speed = speed * 6 / 10;
    }

    if (isWeak) {
        cout << "It too weak.";
    } else if(speed > 100){
        cout<<"It can jump over.";
    }else{
        cout<<"It can't jump over.";
    }

    return 0;
}
