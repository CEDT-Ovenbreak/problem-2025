#include <iostream>

using namespace std;

int main() {
    string pat="^*";
    string str;
    cin >> str;

    cout << "  ###";
    for (int i=0;i<str.size();i++) {
        cout << pat[i % 2] << "#" << pat[i % 2];
    }
    cout << "###||###";
    for (int i=(int)str.size()-1;i>=0;i--) {
        cout << pat[i % 2] << "#" << pat[i % 2];
    }
    cout << "###" << "\n";

    cout << " ###";
    for (int i=0;i<str.size();i++) {
        cout << "#" << pat[(i+1) % 2] << "#";
    }
    cout << "### || ###";
    for (int i=(int)str.size()-1;i>=0;i--) {
        cout << "#" << pat[(i+1) % 2] << "#";
    }
    cout << "###" << "\n";

    cout << "###";
    for (int i=0;i<str.size();i++) {
        cout << "---";
    }
    cout << "###  ||  ###";
    for (int i=0;i<str.size();i++) {
        cout << "---";
    }
    cout << "###" << "\n";

    cout << "###";
    for (int i=0;i<str.size();i++) {
        cout << " ";
    }
    cout << str;
    for (int i=0;i<str.size();i++) {
        cout << " ";
    }
    cout << "###  ||  ###";
    for (int i=0;i<str.size();i++) {
        cout << " ";
    }
    cout << str;
    for (int i=0;i<str.size();i++) {
        cout << " ";
    }
    cout << "###" << "\n";
    cout << "###";
    for (int i=0;i<str.size();i++) {
        cout << "---";
    }
    cout << "###  ||  ###";
    for (int i=0;i<str.size();i++) {
        cout << "---";
    }
    cout << "###" << "\n";

    cout << " ###";
    for (int i=0;i<str.size();i++) {
        cout << "#" << pat[(i+1) % 2] << "#";
    }
    cout << "### || ###";
    for (int i=(int)str.size()-1;i>=0;i--) {
        cout << "#" << pat[(i+1) % 2] << "#";
    }
    cout << "###" << "\n";

    cout << "  ###";
    for (int i=0;i<str.size();i++) {
        cout << pat[i % 2] << "#" << pat[i % 2];
    }
    cout << "###||###";
    for (int i=(int)str.size()-1;i>=0;i--) {
        cout << pat[i % 2] << "#" << pat[i % 2];
    }
    cout << "###" << "\n";

    return 0;
}
