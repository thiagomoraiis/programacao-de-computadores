#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int numero, antecessor, sucessor;
  cout << "Digite um numero" << endl;
  cin >> numero;
  antecessor = numero - 1;
  sucessor = numero + 1;

  cout << "O antecessor de " << numero << " é " << antecessor << " e o seu sucessor é " << sucessor;

  return 0;
}