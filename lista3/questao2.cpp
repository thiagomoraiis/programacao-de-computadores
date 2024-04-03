#include <iostream>

using namespace std;

int main() {
  int acumulador = 0;
  for (int count = 1; count <= 900; count++) {
    acumulador += count;
    cout << acumulador << endl;
  }
  return 0;
}