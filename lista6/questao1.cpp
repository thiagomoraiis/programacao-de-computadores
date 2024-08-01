#include <iostream>

using namespace std;

int main() {
  int mes = 12;
  int semana = 4;
  double matriz[mes][semana];
  double vendas_mes[mes];
  double total_ano = 0;

  for (int i = 0; i < mes; i++) {
    for (int j = 0; j < semana; j++) {
      cout << "Informe o faturamento semanal: " << endl;
      cin >> matriz[i][j];
    }
  }

  for (int i = 0; i < mes; i++) {
    for (int j = 0; j < semana; j++) {
      vendas_mes[i] += matriz[i][j];
      total_ano += matriz[i][j];
    }
  }

  cout << "O faturamento total no ano foi de " << total_ano << endl;

  return 0;
}