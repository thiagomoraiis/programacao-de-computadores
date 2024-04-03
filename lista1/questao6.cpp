#include <iostream>

using namespace std;

int main() {
  float volume, comprimento, largura, altura;
  cout << "Digite o valor do comprimento";
  cin >> comprimento;
  cout << "Digite o valor da largura";
  cin >> largura;
  cout << "Digite o valor da altura";
  cin >> altura;

  volume = comprimento * largura * altura;
  cout << "O volume da caixa é " << (volume / 1000) << "L";

  return 0;
}