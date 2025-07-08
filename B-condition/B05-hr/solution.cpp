#include <iostream>
using namespace std;

int main() {
    string id1, id2;
    cin >> id1 >> id2;
    // Store statistic each person
    int atk1, def1, speed1;
    int atk2, def2, speed2;
    cin >> atk1 >> def1 >> speed1;
    cin >> atk2 >> def2 >> speed2;

    // Decide with condition 1
    if (atk1 + def1 + speed1 > atk2 + def2 + speed2) {
        cout << "Win: " << id1;
    }
    else if (atk1 + def1 + speed1 < atk2 + def2 + speed2) {
        cout << "Win: " << id2;
    } else {
        // Decide with condition 2
        if (atk1 > atk2) {
            cout << "Win: " << id1;
        } else if (atk2 > atk1) {
            cout << "Win: " << id2;
        } else {
            // Decide with Condition 3
            if (speed1 > speed2) {
                cout << "Win: " << id1;
            } else if (speed2 > speed1) {
                cout << "Win: " << id2;
            } else {
                // Decide with Condition 4.1
                if (id1[2] == '3' && id2[2] != '3') {
                    cout << "Win: " << id1;
                } else if (id1[2] != '3' && id2[2] == '3') {
                    cout << "Win: " << id2;
                } else {
                    // Decide with Condition 4.2
                    string last_digit1 = id1.substr(8);
                    string last_digit2 = id2.substr(8);
                    string first_digit1 = id1.substr(0, 2);
                    string first_digit2 = id2.substr(0, 2);

                    if (last_digit1 == "21" && last_digit2 != "21") {
                        cout << "Win: " << id1;
                    } else if (last_digit1 != "21" && last_digit2 == "21") {
                        cout << "Win: " << id2;
                    } else {
                        // Decide with Condition 4.3
                        if (stoi(first_digit1) < stoi(first_digit2)) {
                            cout << "Win: " << id1;
                        } else if (stoi(first_digit2) < stoi(first_digit1)) {
                            cout << "Win: " << id2;
                        } else {
                            // Decide with Condition 4.4
                            cout << "No one.";
                        }
                    }
                }
            }
        }
    }
    
    return 0;
}