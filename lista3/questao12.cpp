#include <iostream>

using namespace std;

int main() {
  int somador = 0;
  int acumulador = 0;

  for (somador = 0; somador < 10; somador++) {
    if (somador % 2 == 0) {
      acumulador += somador;
    }
  }

  cout << acumulador << endl;
  return 0;
}