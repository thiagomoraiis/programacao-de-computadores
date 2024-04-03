#include <iostream>

using namespace std;

int main() {
  int numero;
  cout << "Informe um numero" << endl;
  cin >> numero;
  for (int contador = 1; contador <= numero; contador++) {
    if (numero > 0) {
      cout << contador << endl;
    }
  }
  return 0;
}