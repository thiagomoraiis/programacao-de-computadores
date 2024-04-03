#include <iostream>
#include <math.h>
using namespace std;

int main() {
  double volume, raio;
  double pi = 3.14159;
  cout << "Insira o valor do raio da esfera\n";
  cin >> raio;
  volume = (4.0 / 3.0) * pi * (pow(raio, 3.0));
  cout << "O volume da esfera é " << volume;
}