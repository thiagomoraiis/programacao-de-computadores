#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double quant_quilo_morango, quant_quilo_maca, quilo_maca,
  quilo_morango, total_kg_comprados, valor_sem_desconto;

  cout << "Informe a quantidade de maças (emg kg)" << endl;
  cin >> quant_quilo_maca;
  cout << "Informe a quantidade de morangos (emg kg)" << endl;
  cin >> quant_quilo_morango;

  if (quant_quilo_maca < 5.0) {
    quilo_maca = 1.80;
  } else {
    quilo_maca = 1.50;
  }

  if (quant_quilo_morango < 5.0) {
    quilo_morango = 2.50;
  } else {
    quilo_morango = 2.20;
  }

  total_kg_comprados = quant_quilo_morango + quant_quilo_maca;
  valor_sem_desconto = (quant_quilo_maca * quilo_maca) + (quant_quilo_morango * quilo_morango);

  if (total_kg_comprados > 8.0 || valor_sem_desconto > 25.00) {
    double total_desconto = valor_sem_desconto * 0.10;
    valor_sem_desconto -= total_desconto;
  }
  cout << "O valor a ser pago pelo cliente é R$" << fixed << setprecision(2) << valor_sem_desconto << endl;

  return 0;
}