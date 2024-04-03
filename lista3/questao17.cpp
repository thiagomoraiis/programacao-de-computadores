#include <iostream>

using namespace std;

int main() {
  double valor=0, dentro_intervalo=0, fora_intervalo=0;

  for (int contador = 0; contador <= 10; contador++) {
    cout << "Informe um novo valor para o contador" << endl;
    cin >> valor;

    if (valor >= 9 && valor <= 19) {
      dentro_intervalo+=1;
    } else {
      fora_intervalo+=1;
    }
  }
  cout << "Tem " << dentro_intervalo << " dentro do intervalor e " << fora_intervalo << " fora" << endl;
  return 0;
}