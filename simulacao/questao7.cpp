#include <iostream>

using namespace std;

int main() {
  int count = 0;
  int valor_atual = 0;
  int v[10] = {2, 2, 3, 4, 4, 5, 6, 6, 7, 9};
  int v_unique[] = {}; 
  int sizeV = sizeof(v) / sizeof(int);

  for (int i = 0; i < sizeV; i++) {
    count = 0;

    for (int j = 0; j < sizeV; j++) {
      if (v[j] == v[i]) {
        count++;
        valor_atual = v[j];
      }
    }

    if (count == 1) {
      v_unique[i] = valor_atual;
      cout << v_unique[i] << " ";
    }
  }

  cout << endl;

  return 0;
}

// Questão 3: Elementos Únicos de um Vetor
// Pergunta:
// Escreva um código que receba um vetor de inteiros
 // v com tamanho n e retorne um novo vetor contendo apenas os elementos únicos
 // (sem repetições) do vetor original.