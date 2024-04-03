#include <iostream>
#include <vector>
using namespace std;

int main() {
  int conta_repeticao = 0, array_length = 15;
  double vet[array_length];
  double repetidos[] = {};
  double numbers;

  for (int num = 0; num < array_length; num++) {
    conta_repeticao = 0;
    cout << "Infome um numero" << endl;
    cin >> numbers;
    vet[num] = numbers;
    

    for (int num = 0; num < array_length; num++) {
      if (numbers == vet[num]) {
        conta_repeticao++;
      }

      if (conta_repeticao >= 2) {
        cout << "O numero " << numbers << " aparece " << conta_repeticao << " vezes." << endl;
        cout << "Essa repetição ocorre na posição " << num << " do array" << endl;
        repetidos[num] = numbers;
      }
    }
  }

  for (int num = 0; num < array_length; num++) {
    cout << "O numero " << repetidos[num] << " apareceu mais de uma vez no array" << endl; 
  }

  return 0;
}
