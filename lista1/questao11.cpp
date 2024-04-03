#include <iostream>
using namespace std;

int main() {
  double preco_fabrica, preco_final, impostos, valor_distribuidor;
  
  cout << "Insira o preço de fabrica:\n";
  cin >> preco_fabrica;

  impostos = preco_fabrica * 45.0 / 100;
  valor_distribuidor = preco_fabrica * 28.0 / 100;
  preco_final = preco_fabrica + impostos + valor_distribuidor;

  cout << "O valor final para o cliente sera R$" << preco_final << "\n";

  return 0;
}