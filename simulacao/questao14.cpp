#include <iostream>

using namespace std;

int main() {
  int numero = 0;
  cout << "Informe o numero maximo (ele deve ser impar)" << endl;
  cin >> numero;

  int vetor[numero];

  for (int i = 0; i < numero; i++) {
    vetor[i] = i + 1;
  }

  for (int i = 0; i < numero; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << " ";
    }

    for (int k = i; k < numero - i; k++) {
      cout << vetor[k] << " ";
    }
  }

  return 0;
}