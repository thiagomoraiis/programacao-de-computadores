#include <iostream>

using namespace std;

int main() {
  int array_length = 10, universe_length = 20;
  int conjunto_impares[array_length];
  int conjunto_pares[array_length];
  int conjunto_universo[universe_length];

  int idx_par = 0, idx_impar = 0;
  for (int num = 0; num < universe_length; num++) {
    if (num % 2 == 0) {
      conjunto_pares[idx_par++] = num;
    } else {
      conjunto_impares[idx_impar++] = num;
    }
  }

  for (int num = 0; num < universe_length; num++) {
    if (num % 2 == 0) {
      conjunto_universo[num] = conjunto_pares[num / 2];
    } else {
      conjunto_universo[num] = conjunto_impares[num / 2];
    }
    cout << conjunto_universo[num] << endl;
  }

  return 0;
}
