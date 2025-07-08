#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
    int C, M, L;
    cin >> C >> M >> L;
    
    float power = ceil( (pow(C, 2) + log(M+1)) * exp((double) L/(C+1)) );
    cout << fixed << setprecision(2) << power;

    return 0;
}