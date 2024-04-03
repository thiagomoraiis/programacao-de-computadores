#include <iostream>

using namespace std;

int main() {
  double salario_fixo, vendas_vendedor, salario_total, comissao;
  cout << "Informe o valor do salario fixo" << endl;
  cin >> salario_fixo;
  cout << "Informe o valor das vendas do vendedor" << endl;
  cin >> vendas_vendedor;

  if (vendas_vendedor > 1500.00) {
    salario_total = salario_fixo + (salario_fixo * 0.08);  
    cout << salario_fixo * 0.08;  
  } else {
    salario_total = salario_fixo + (salario_fixo * 0.03);
    cout << salario_fixo * 0.03;  
  }

  cout << "O salario total do vendedor no mes foi de R$" << salario_total;
  return 0;
}