#include <iostream>
#include <math.h>
using namespace std;

int main() {
  double A, B, soma, subtracao, multiplicacao, divisao;
  cout << "Digite o valor de A:" << endl;
  cin >> A;
  cout << "Digite o valor de B:" << endl;
  cin >> B;
  soma = A + B;
  subtracao = A - B;
  multiplicacao = A * B;
  divisao = A / B;
  cout << "Adicao: " << soma << endl << "Subtracao: " << subtracao << endl << "Multiplicacao: " << multiplicacao << endl << "Divisão: " << divisao << endl;
  return 0;
}