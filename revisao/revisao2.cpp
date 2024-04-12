#include <iostream>

using namespace std;

int main() {
  int vector_length = 6, num, conta_repeticoes;
  int vet[vector_length];
  int vet_repeticao[6];

  for (int i = 0; i < vector_length; i++) {
    // conta_repeticoes = 0;

    cout << "Digite um numero para ser inserido no vetor" << endl;
    cin >> num;
    vet[i] = num;

    // for (int j = 0; j < vector_length; j++) {
    //   if (num == vet[j]) {
    //     conta_repeticoes++;
    //   }
    // }
    // if (conta_repeticoes > 1) {
    //   cout << "O numero " << num << " se repete " << (conta_repeticoes-1) << " no indice " << i << endl;
    // }
  }

  for (int i = 0; i < vector_length; i++) {
    conta_repeticoes = 0;

    for (int j = 0; j < vector_length; j++) {
      if (num == vet[j]) {
        conta_repeticoes++;
      }
    }
    if (conta_repeticoes > 1) {
      cout << "O numero " << num << " se repete " << (conta_repeticoes-1) << " no indice " << i << endl;
    }
  }

  return 0;
}