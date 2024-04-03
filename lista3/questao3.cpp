#include <iostream>

using namespace std;

int main() {
  int acumulador=0, numero;
  for (int count = 0; count < 10; count++) {
    cout << "Informe o valor" << endl;
    cin >> numero;
    acumulador += numero;
    cout << acumulador << endl;
  }
  cout << "A media dos numeros informados foi " << (acumulador / 10) << endl;
  return 0;
}