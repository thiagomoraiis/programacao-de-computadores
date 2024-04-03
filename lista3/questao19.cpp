#include <iostream>

using namespace std;

int main() {
  int valor1, valor2, acumulador=0;
  cout << "Digite o primeiro valor" << endl;
  cin >> valor1;
  cout << "Digite o segundo valor" << endl;
  cin >> valor2;

  for (int contador = valor1; contador <= valor2; contador++) {
    acumulador+=contador;
    cout << acumulador << endl;
  }
  return 0;
}