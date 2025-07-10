#include <iostream>
#include <iomanip>
#include <climits>
using namespace std;
int main(){
    int n,temp,high = INT_MIN,low = INT_MAX;
    double avg = 0;
    cin >> n;
    for(int i = 0; i < n;i++){
        cin >> temp;
        if(temp > high){
            high = temp;
        }
        if(temp < low){
            low = temp;
        }
        avg += temp;
    }
    cout << high << '\n' << low << '\n' << fixed << setprecision(2) << avg/n;
}