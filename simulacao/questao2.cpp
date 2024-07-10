#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
  int n, maior, menor;
  cout << "Informe o tamanho do vetor" << endl;
  cin >> n;
  int v[n];

  srand(time(NULL));

  for (int i = 0; i < n; i++) {
    v[i] = rand() % 200 + 1;
  }

  maior = v[0];
  menor = v[0];

  for (int i = 0; i < n; i++) {
    if (v[i] < menor) {
      menor = v[i];
    }
    if (v[i] > maior) {
      maior = v[i];
    }
    cout << "Numero atual: " << v[i] << endl;
  }
  cout << "O menor valor é o numero " << menor << endl;
  cout << "O maior valor é o numero " << maior << endl;

  return 0;
}

// Questão 2:  Escreva programa que receba um vetor de inteiros v com
// tamanho n e retorne o maior e o menor elemento desse vetor.