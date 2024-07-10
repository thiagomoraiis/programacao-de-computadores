#include <iostream>

using namespace std;

int main() {
  int product = 1;
  int v[5] = {1, 2, 3, 4, 5};
  int length = sizeof(v) / sizeof(int);

  for (int i = 0; i < length; i++) {
    product *= v[i];
  }
  cout << product << endl;

  return 0;
}

// Questão 1: Desvio Padrão de um Vetor
// Pergunta:
// Dado um vetor de inteiros v com tamanho n,
// escreva um programa para calcular o desvio padrão dos elementos desse vetor.