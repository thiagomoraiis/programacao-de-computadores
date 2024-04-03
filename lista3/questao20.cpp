#include <iostream>

using namespace std;

int main() {
  int acumulador = 0, iteracoes=0;
  double media;

  for (int contador = 15; contador <= 100; contador++) {
    acumulador+=contador;
    iteracoes++;
    cout << iteracoes << endl;
  }

  media = acumulador / iteracoes;
  cout << "A media é " << media << endl;
  return 0;
}