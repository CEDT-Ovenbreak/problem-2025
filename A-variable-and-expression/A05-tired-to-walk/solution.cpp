#include <cmath>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int scale, speed, x1, x2, y1, y2;
  cin >> scale >> speed >> y1 >> x1 >> y2 >> x2;
  float distance = (scale)*sqrt(pow(x1 + x2, 2) + pow(y1 + y2, 2));
  float time = distance / ((float)(speed) * 18 / 5);
  int hour = floor(time);
  int minute = ceil((time - hour) * 60);
  cout << hour << " hr " << minute << " min";
  return 0;
}