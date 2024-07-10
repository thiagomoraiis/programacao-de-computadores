#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double a = 3, b = 3, c = 4;
  c = a * b;

  if (a < c) {
    int d = sqrt(c);

    if (d % 2 == 0) {
      return 0;

    } else {
      int e = sqrt(d * b * (a * a) * sqrt(d));

      if (d >= e) {
        cout << d << endl;
      } else {
        cout << e << endl;
      }
    }

    return 0;
  }

  cout << a << endl;
  return 0;
}