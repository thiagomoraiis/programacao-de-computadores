#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
  int n, soma_impares = 0.0, soma_pares = 0.0;
  cout << "Informe o tamanho do vetor" << endl;
  cin >> n;
  int v[n];

  srand(time(NULL));

  for (int i = 0; i < n; i++) {
    v[i] = rand() % 100 + 1;
  }

  for (int i = 0; i < n; i++) {
    if (v[i] % 2 == 0) {
      soma_pares += v[i];
      cout << "Par: " << v[i] << endl;
    } else {
      soma_impares += v[i];
      cout << "Impar: " << v[i] << endl;
    }
  }

  cout << "Soma dos numeros impares" << soma_impares << endl;
  cout << "Soma dos numeros pares" << soma_pares << endl;

  return 0;
}

// Questão 3:Escreva um código que calcule a soma dos elementos pares
 // e ímpares de um vetor de inteiros v com tamanho n.