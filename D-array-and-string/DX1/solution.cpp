#include <iostream>

using namespace std;

int main() {
  int width, height, rate;
  int cntRaw = 0, cntCooked = 0;
  cin >> width >> height >> rate;
  char map[height][width];
  for (int i = 0; i < height; i++)
    for (int j = 0; j < width; j++)
      cin >> map[i][j];

  for (int ver = 0; ver < height; ver++) {
    bool isEven = (ver % 2 == 0);
    int start = isEven ? 0 : width - 1;
    int step = isEven ? 1 : -1;
    for (int hor = start; (isEven ? (hor < width) : (hor >= 0)); hor += step) {
      if (map[ver][hor] != 'L') {
        cntRaw += (map[ver][hor] - '0');
        continue;
      }
      // map[ver][hor] == 'L'

      int poolCount = 0; // count lava pool
      int iStr = (ver - 1 < 0) ? 0 : (ver - 1);
      int iEnd = (ver + 2 > height) ? height : (ver + 2);
      int jStr = (hor - 1 < 0) ? 0 : (hor - 1);
      int jEnd = (hor + 2 > width) ? width : (hor + 2);

      for (int i = iStr; i < iEnd; i++) {
        for (int j = jStr; j < jEnd; j++) {
          if (map[i][j] == 'L')
            poolCount++;
        }
      }
      cntCooked += (poolCount >= 4) ? (cntRaw * rate) : (cntRaw / rate);
      cntRaw = 0;
    }
  }
  cout << cntCooked;
  return 0;
}
