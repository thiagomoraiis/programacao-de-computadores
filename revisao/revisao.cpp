#include <iostream>

using namespace std;

int main() {
  int contador = 0, num1, num2;
  cout << "Informe os numeros" << endl;
  cin >> num1;
  cin >> num2; 


  for (int i = num1; i <= num2; i++) {
    contador = 0;

    for (int j = 1; j <= i; j++) {
      if (i % j == 0) {
        contador++;
      }
    }

    if (contador == 2) {
      cout << i << endl;
      break;
    }
  }

  return 0;
}