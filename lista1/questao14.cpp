#include <iostream>
#include <math.h>
using namespace std;

int main() {
  float x1, x2, y1, y2, distancia;
  cin >> x1;
  cin >> x2;
  cin >> y1;
  cin >> x2;

  distancia = sqrt(pow((x2 - x1), 2.0) + pow((y2 - y1), 2.0));
  cout << "A distancia entre os ponto é " << distancia;
  return 0;
}