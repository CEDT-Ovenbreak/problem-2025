#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string pattern[10][5] = {
    { "###", "# #", "# #", "# #", "###" },
    { "  #", "  #", "  #", "  #", "  #" },
    { "###", "  #", "###", "#  ", "###" },
    { "###", "  #", "###", "  #", "###" },
    { "# #", "# #", "###", "  #", "  #" },
    { "###", "#  ", "###", "  #", "###" },
    { "###", "#  ", "###", "# #", "###" },
    { "###", "  #", "  #", "  #", "  #" },
    { "###", "# #", "###", "# #", "###" },
    { "###", "# #", "###", "  #", "###" }
};

string letterA[5] = { "###", "# #", "###", "# #", "# #" };
string letterM[5] = { "# #", "###", "# #", "# #", "# #" };
string letterP[5] = { "###", "# #", "###", "#  ", "#  " };

void printDigitLine(int x, int row) {
    cout << pattern[x / 10][row] << " ";
    cout << pattern[x % 10][row] << " ";
}

int main(){
    ll h, m;
    cin >> h >> m;
    ll displayHour = h % 12;
    string period = (h < 12) ? "AM" : "PM";
    for (int row = 0; row < 5; row++) {
        printDigitLine(displayHour, row);
        if (row == 1 || row == 3) {
            cout << ": ";
        }
        else {
            cout << "  ";
        }
        printDigitLine(m, row);
        cout << "  ";
        if (period == "AM") {
            cout << letterA[row] << " " << letterM[row];
        }
        else {
            cout << letterP[row] << " " << letterM[row];
        }
        cout << "\n";
    }
	return 0;
}