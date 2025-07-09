#include <iostream>
using namespace std;

#define mod 10007

int main() {
  int roadLength, thunderQuota, easyQuota;
  cin >> roadLength >> thunderQuota >> easyQuota;

  int roadLeft, roadRight;
  bool thunderIsRight = false, easyIsRight = true;
  int thunderVisit = 0, easyVisit = 0;
  int thunderSum = 0, easyProd = 1;

  int croiSteak = 0, croiMax = 0;
  int curCroiSide = 0, prevCroiSide;
  bool hasSpace = false;

  for (int idx = 0; idx < roadLength; idx++) {
    cin >> roadLeft >> roadRight;

    if (thunderVisit == thunderQuota) {
      thunderIsRight = !thunderIsRight;
      thunderVisit = 0;
    }
    if (easyVisit == easyQuota) {
      easyIsRight = !easyIsRight;
      easyVisit = 0;
    }
    int thunderCur = thunderIsRight ? roadRight : roadLeft;
    int easyCur = easyIsRight ? roadRight : roadLeft;

    if (thunderCur > 0) {
      thunderSum = ((thunderSum % mod) + (thunderCur % mod)) % mod;
      thunderVisit++;
    }
    if (easyCur > 0) {
      easyProd = ((easyProd % mod) * (easyCur % mod)) % mod;
      easyVisit++;
    }

    if (thunderIsRight != easyIsRight)
      curCroiSide = 0;
    else
      curCroiSide = (thunderIsRight ? -1 : 1);

    if (idx > 0) {
      if (curCroiSide == prevCroiSide && curCroiSide != 0) {
        croiSteak++;
        hasSpace = true;
      } else {
        if (croiSteak > croiMax)
          croiMax = croiSteak;
        croiSteak = 1;
      }
    }
    prevCroiSide = curCroiSide;
  }
  if (croiSteak > croiMax)
    croiMax = croiSteak;
  if (!hasSpace)
    croiMax = 0;
  cout << thunderSum << ' ' << easyProd << ' ' << croiMax;
  return 0;
}
