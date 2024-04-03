#include <iostream>
#include <vector>
using namespace std;

int main() {
  int array_length = 4;
  double arr[array_length];

  double nota = 0, acumulador = 0.0;

  for (int i = 0; i < 4; i++) {
      cout << "Digite uma nota" << endl;
      cin >> nota;
      arr[i] = nota;
  }

  for (int i = 0; i < array_length; i++) {
      acumulador += arr[i];
  }

  cout << "A media é " << acumulador / array_length << endl;

  return 0;
}