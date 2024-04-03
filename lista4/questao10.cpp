#include <iostream>
#include <vector>

using namespace std;

int main() {
  int array_size = 20;
  double vet[array_size];
  double numero, numero_qualquer;

  cout << "Informe 5 numeros para que sejam inseridos no vetor" << endl;
  for (int i = 0; i < array_size; i++) {
    cin >> numero;
    vet[i] = numero;
  }

  cout << "Agora, insira um numero qualquer" << endl;
  cin >> numero_qualquer;

  bool encontrado = false;
  int posicao;

  for (int i = 0; i < array_size; i++) {
    if (vet[i] == numero_qualquer) {
      encontrado = true;
      posicao = i;
      break;
    }
  }

  if (encontrado) {
    cout << "O numero ja existe no vetor. Substituindo..." << endl;
    cout << "Digite o novo numero: ";
    cin >> numero_qualquer;
    vet[posicao] = numero_qualquer;
  }

  cout << "Vetor atualizado: ";
  for (int i = 0; i < array_size; i++) {
    cout << vet[i] << " ";
  }
  cout << endl;

  return 0;
}
