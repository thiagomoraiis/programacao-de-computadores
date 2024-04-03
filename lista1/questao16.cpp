#include <iostream>
#include <math.h>
using namespace std;

int main() {
  double tamanho_centimetro, tamanho_metros;
  cout << "Informe o tamanho do seu pé:" << endl;
  cin >> tamanho_centimetro;
  tamanho_metros = tamanho_centimetro / 100;
  cout << "O tamanho do seu pé é de " << tamanho_metros << " metros";

  return 0;
}