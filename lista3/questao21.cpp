#include <iostream>

using namespace std;

int main() {
  int numero_mercadoria, contador, acumulador = 0;
  double valor_mercadoria = 0.0, media = 0.0;

  cout << "Informe o numero total de mercadorias em estoque" << endl;
  cin >> numero_mercadoria;

  for (contador = 0; contador < numero_mercadoria; contador++) {
    cout << "Informe o valor das mercadorias, respectivamente" << endl;
    cin >> valor_mercadoria;
    acumulador += valor_mercadoria;
  }

  media = acumulador / contador;
  cout << "O valor total em estoque é " << acumulador << endl;
  cout << "A media do valor das mercadorias é " << media << endl;
  return 0;
}