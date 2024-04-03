#include <iostream>
using namespace std;

int main() {
  float salario, salario_reajustado, percentual_reajuste, reajuste;
  cout << "Informe seu salario atual:\n";
  cin >> salario;
  cout << "Infome o percentual de reajuste:\n";
  cin >> percentual_reajuste;

  reajuste = salario * percentual_reajuste / 100;
  salario_reajustado = salario + reajuste;

  cout << "O salario com o reajuste agora é: R$" << salario_reajustado << "\n";
  return 0;
}