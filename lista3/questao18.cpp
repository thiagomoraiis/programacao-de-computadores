#include <iostream>

using namespace std;

int main() {
  double numero, acumulador=0;

  for (int contador = 0; contador <= 9; contador++) {
    cout << "Digite um numero" << endl;
    cin >> numero;

    if (numero < 40) {
      acumulador += numero;
    }
  }

  cout << acumulador << endl;
  return 0;
}