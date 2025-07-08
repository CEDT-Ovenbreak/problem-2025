#include<iostream>
#include<string>
using namespace std;

int main() {
    int cycle;
    cin >> cycle;
    // For gurantee it not exceeds than 26.
    cycle %= 26;
    string encodeText;
    getline(cin >> ws, encodeText);

    for (int i=0; i<encodeText.size(); i++) {
        // Handle each character
        char s = encodeText[i];
        // Detect it's alphabet or not for calculate
        if ((s >= 'A' && s <= 'Z')) {
            if (s - cycle >= 'A') {
                s -= cycle;
            } else {
                // We're cyling with character `a` between `s` for calculate distance from last alphabet
                s = 'Z' - (cycle - (s-'A')) + 1;
            }
        } else if ((s >= 'a' && s <= 'z')) {
            if (s - cycle >= 'a') {
                s -= cycle;
            } else {
                s = 'z' - (cycle - (s-'a')) + 1;
            }
        }
        cout << s;
    }
    cout << endl;
    return 0;
}