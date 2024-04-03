#include <iostream>

using namespace std;

int main() {
  float total, brancos, nulos, validos;
  cout << "Escreve o total de votos registrados:\n";
  cin >> total;
  cout << "Escreve o total de votos brancos:\n";
  cin >> brancos;
  cout << "Escreve o total de votos nulos:\n";
  cin >> nulos;
  validos = total - (brancos + nulos);

  cout << "\n";
  cout << "Porcentagem de votos validos: " << validos / total * 100 << "%\n";
  cout << "Porcentagem de votos brancos: " << brancos / total * 100 << "%\n";
  cout << "Porcentagem de votos nulos: " << nulos / total * 100 << "%\n";
  return 0;
}