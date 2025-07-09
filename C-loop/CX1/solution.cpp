#include <ios>
#include <iostream>
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  int step = 1, iSteak;
  char cur;
  int days;
  cin >> days;
  string order;
  for (int i = 0; i < days; i++) {
    cin >> order;
    if (order == "oia") {
      iSteak = 0;
      while (cin >> cur) {
        if (cur == 'i') {
          iSteak++;
          if (iSteak == 3)
            break;
        } else {
          step += (cur == 'a' ? 1 : -1);
          if (step < 1)
            step = 1;
        }
      }
    } else if (order == "oii") {
      iSteak = 0;
      while (cin >> cur) {
        if (cur == 'i') {
          iSteak++;
          if (iSteak == 3)
            break;
        } else {
          for (int i = 0; i < step * iSteak; i++)
            cout << 'i' << ' ';
          for (int i = 0; i < step; i++)
            cout << cur << ' ';
          iSteak = 0;
        }
      }
    }
  }
  return 0;
}
