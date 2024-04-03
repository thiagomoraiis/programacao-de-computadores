#include <iostream>

using namespace std;

int main() {
  int acumulador = 0, num_usuario;
  cout << "Digite um valor" << endl;
  cin >> num_usuario;

  for (int count = 1; count <= num_usuario; count++) {
    if (count % 2 != 0) {
      acumulador += count;
      cout << acumulador << endl;
    }
  }
  return 0;
}