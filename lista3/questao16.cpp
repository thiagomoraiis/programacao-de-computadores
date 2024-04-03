#include <iostream>

using namespace std;

int main() {
  int numero;
  cout << "Informe um numero" << endl;
  cin >> numero;

  while (numero == 0) {
    cout << "Informe um numero novamente" << endl;
    cin >> numero;

    for (int contador = 1; contador <= numero; contador++) {
      cout << contador << endl;
    }
  }
  return 0;
}