#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    for (int t = 1; t <= 10; t++) {
        string tc = to_string(t) + ".in";
        string tc2 = to_string(t) + ".sol";
        freopen(tc.c_str(), "r", stdin);
        freopen(tc2.c_str(), "w", stdout);

        string season, moon, ingredient;
        cin >> season >> moon >> ingredient;
        if (season == "spring" || season == "summer") {
            if (moon == "full") {
                if (ingredient == "honey" || ingredient == "milk") {
                    cout << "Ingredient accepted!";
                }
                else {
                    cout << "Ingredient rejected!";
                }
            }
            else {
                if (moon == "new" && ingredient != "chocolate") {
                    cout << "Ingredient rejected!";
                }
                else {
                    cout << "Ingredient accepted!";
                }
            }
        }
        else if (season == "autumn" || season == "winter") {
            if (moon == "new" || moon == "waning") {
                if (ingredient == "milk" || ingredient == "chocolate") {
                    cout << "Ingredient accepted!";
                }
                else {
                    cout << "Ingredient rejected!";
                }
            }
            else {
                cout << "Ingredient accepted!";
            }
        }
        else {
            cout << "Ingredient rejected!";
        }
        cout << "\n";
    }
    return 0;
}