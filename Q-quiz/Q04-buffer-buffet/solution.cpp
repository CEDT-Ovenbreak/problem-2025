#include <cmath>
#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;

int main() {
  int n, aDist, bDist;
  cin >> n >> aDist >> bDist;
  long slots[n];
  for (int i = 0; i < n; i++)
    cin >> slots[i];
  long sum = 0;
  int aIdx = 0, bIdx = n - 1, plates = 0;
  while (aIdx < n && bIdx >= 0) {
    sum += slots[aIdx] * slots[bIdx];
    aIdx += aDist;
    bIdx -= bDist;
    plates++;
  }

  cout << fixed << setprecision(2) << ((double)sum / plates) << ' ';
  long aTemp = slots[(plates / 2) * aDist];
  long bTemp = slots[((n - 1) - (plates / 2) * bDist)];
  int divisor = 1;
  if (plates % 2 == 0) {
    int idx = plates / 2 - 1;
    aTemp += slots[idx * aDist];
    bTemp += slots[((n - 1) - idx * bDist)];
    divisor = 2;
  }
  cout << ((double) aTemp / divisor) << ' ' << ((double) bTemp / divisor);
  return 0;
}
