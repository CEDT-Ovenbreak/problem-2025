#include <iostream>

using namespace std;

int main() {
  string a, b, c, d, e;
  int start;
  cin >> start;
  cin >> a >> b >> c >> d;

  int oCDelta = ((b < a) + (c < a) + (d < a) - (start - 1) + 4) % 4;
  int oTheta = ((a < b) + (c < b) + (d < b) - (start - 1) + 4) % 4;
  int oSDelta = ((a < c) + (b < c) + (d < c) - (start - 1) + 4) % 4;
  int oPsi = ((a < d) + (b < d) + (c < d) - (start - 1) + 4) % 4;

  bool omega = ((oSDelta < oPsi) && ((oTheta == 0) || (start == 1)));
  bool mu = ((oTheta < oSDelta) && (oSDelta < oCDelta)) && (oPsi != 2);
  bool xi = (omega != mu) && !(oCDelta < oPsi) || (oTheta != 3);

  if (xi && ((oPsi < oTheta) || (oCDelta < oSDelta))) {
    cout << "CROISSANT with ordering: " << oCDelta + 1 << ' ' << oTheta + 1
         << ' ' << oSDelta + 1 << ' ' << oPsi + 1 << '\n';
  } else
    cout << "No Croissant :(\n";

  return 0;
}
