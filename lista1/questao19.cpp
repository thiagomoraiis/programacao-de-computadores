#include <iostream>
#include <math.h>
using namespace std;

int main() {
  double metros_segundos, distancia_percorrida, minutos_percorridos;
  cout << "Informe a distancia percorrida pelo projetil" << endl;
  cin >> distancia_percorrida;
  cout << "Informe o tempo (em minutos) percorridos:" << endl;
  cin >> minutos_percorridos;
  metros_segundos = (distancia_percorrida * 1000) / (minutos_percorridos * 60);

  cout << "A velocidade é de " << metros_segundos << "m/s" <<endl;

  return 0;
}