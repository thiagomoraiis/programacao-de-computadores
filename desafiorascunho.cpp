#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;

  int total_primos = 0;
  int soma_primos = 0;
  int numero_atual = 1;

  while(total_primos < n) {
    bool e_primo = true;

    if (numero_atual <= 1)
      e_primo = false;

    for (int i = 2; i < numero_atual; i++) {
      if (numero_atual % i == 0) {
        e_primo = false;
      }
    }

    if (e_primo) {
      soma_primos += numero_atual;
      total_primos += 1;
      cout << numero_atual << endl;
    }

    numero_atual+=1; 
  }
  cout << "A soma dos numeros primos consecutivos é " << soma_primos << endl;
}
