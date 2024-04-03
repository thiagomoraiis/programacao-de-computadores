#include <iostream>
using namespace std;

int main() {
  double carros_vendidos, total_vendas, salario, valor_por_carro, salario_final, comissao_fixa, comissao_porcentagem;

  cout << "Insira o salario fixo do funcionario" << endl;
  cin >> salario;
  cout << "Insira o numero de carros vendidos" << endl;
  cin >> carros_vendidos;
  cout << "Insira o total de vendas" << endl;
  cin >> total_vendas;
  cout << "Insira o valor recebido por carro vendido" << endl;
  cin >> valor_por_carro;

  comissao_fixa = carros_vendidos * valor_por_carro;
  comissao_porcentagem = total_vendas * 0.05;
  salario_final = salario + comissao_fixa + comissao_porcentagem;

  cout << "O salario final do vendedor é: " << salario_final << endl;
  return 0;
}
