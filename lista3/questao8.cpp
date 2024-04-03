#include <iostream>

using namespace std;

int main() {
  double valor1, valor2;
  cout << "Digite o primeiro valor: " << endl;
  cin >> valor1;
  cout << "Digite o segundo valor: " << endl;
  cin >> valor2;

  while (valor2 == 0) {
    cout << "O numero 0 nao e aceito. Informe outro numero" << endl;
    cin >> valor2;    
  }
  cout << "O resultado da divisão é " << valor1 / valor2;

  return 0;
}