#include <iostream>

using namespace std;

int main() {
  int acumulador = 0;
  for (int count = 1; count <= 100; count++) {
    if (count % 2 != 0) {
      acumulador += count;
      cout << acumulador << endl;
    }
  }
  return 0;
}