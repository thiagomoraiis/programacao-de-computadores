#include <iostream>
#include <string>

using namespace std;

int main() {
  int quant_pessoas = 10;
  int quant_informacoes = 5;
  string agenda[quant_pessoas][quant_informacoes];

  for (int i = 0; i < quant_pessoas; i++) {
    cout << "Digite o nome, endereço, código postal, bairro e telefone, respectivamente:" << endl;
    for (int j = 0; j < quant_informacoes; j++) {
      cin >> agenda[i][j];
    }
  }

  cout << "| Nome | Endereço | Codigo | Bairro | Telefone" << endl;
  for (int i = 0; i < quant_pessoas; i++) {
    for (int j = 0; j < quant_informacoes; j++) {
      cout << "| " << agenda[i][j] << " | ";
    }
    cout << endl;
  }


  return 0;
}