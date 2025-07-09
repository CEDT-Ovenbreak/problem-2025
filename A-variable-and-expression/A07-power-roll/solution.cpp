#include <cmath>
#include <iostream>

using namespace std;

int main() {
  const double p = 3.28, s = 1.15112, n = 4.80852, l0 = 13.0725;
  const long D = 69;
  double theta, px, py, i, v, l, w, d;
  cin >> i >> v >> l >> w;
  cin >> theta >> px >> py >> d;
  theta *= 3.14159 / 180.0;
  double vecx = cos(theta) * px - sin(theta) * py;
  double vecy = sin(theta) * px + py;
  double numer = tan(sqrt(pow(vecx, 2) + pow(vecy, 2)) / l0 * p) * i * v;
  double denom = l * ((long)ceil(exp(n * d)) % D) * cbrt(w);
  double np = p * (log(abs(cbrt(numer / denom))) / log(s));
  cout << round(np * 1e4) / 1e4 << " NP";
  return 0;
}