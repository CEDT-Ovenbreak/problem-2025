#include<iostream>
using namespace std;
int main() {
    int x, y, z;
    cin >> x >> y >> z;

    switch (z)
    {
        case 1:
            cout << x+y;
            break;
        case 2:
            cout << x-y;
            break;
        case 3:
            cout << x*y;
            break;
        case 4:
            if (y == 0) {
                cout << "cannot divide by zero";
            } else {
                cout << x/y;
            }
            break;
        case 5:
            if (y == 0) {
                cout << "cannot divide by zero";
            } else {
                cout << x%y;
            }
            break;
        default:
            cout << "Out of range";
            break;
    }

    cout << endl;
    return 0;
}