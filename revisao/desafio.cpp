#include <iostream>

using namespace std;

int main() {
  int numero_primo;
  cout << "Informe um numero primo: ";
  cin >> numero_primo;

  int total_primos = 0, soma_primos = 0, numero_atual = 2, auxiliar = 0;

  while (total_primos < numero_primo) {
    auxiliar = 0;

    for (int i = 1; i <= numero_atual; i++) {
      if (numero_atual % i == 0) {
        auxiliar += 1;
      }
    }

    if (auxiliar == 2) {
      soma_primos += numero_atual;
      total_primos += 1;
      cout << numero_atual << endl;
    }

    numero_atual += 1;
  }
  cout << "A soma dos numeros primos consecutivos e: " << soma_primos << endl;

  return 0;
}
