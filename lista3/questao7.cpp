#include <iostream>

using namespace std;

int main() {
  double valor1, valor2;
  cout << "Digite o primeiro valor: " << endl;
  cin >> valor1;
  cout << "Digite o segundo valor: " << endl;
  cin >> valor2;

  if (valor2 == 0) {
    for (int i = 0; i <= 99999; i++) {
      cout << "Digite o segundo valor: " << endl;
      cin >> valor2;
      if (valor2 != 0) {
        break;
      }
    }
  }
  cout << "O resultado da divisão é " << valor1 / valor2;

  return 0;
}