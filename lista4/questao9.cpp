#include <iostream>
#include <vector>
using namespace std;

int main() {
  int array_size = 20;
  double vet[array_size];
  double numero, numero_qualquer;
  int conta_repeticoes;

  cout << "Informe 20 numeros para que sejam inseridos no vetor" << endl;
  for (int i = 0; i < array_size; i++) {
    cin >> numero;
    vet[i] = numero;
  }

  cout << "Agora, insira um numero qualquer" << endl;
  cin >> numero_qualquer;

  for (double num: vet) {
    if (num == numero_qualquer) {
      cout << numero_qualquer << endl;
      cout << num << endl;
      conta_repeticoes++;
    }
  }

  cout << "O numero digitado aparece " << conta_repeticoes << " vezes no vetor" << endl;

  return 0;
}
