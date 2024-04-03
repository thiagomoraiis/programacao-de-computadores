#include <iostream>
#include <string>

using namespace std;

int main() {
  double a, b, c;
  string mens;
  cout << "Digite os lados A, B, C do triangulo, respectivamente" << endl;
  cin >> a;
  cin >> b;
  cin >> c;

  if ((a < b + c) && (b < a + c) && (c < a + b)) {
    if ((a == b) && (b == c)) {
      mens = "Triangulo Equilátero";
    } else {
      if ((a == b) || (b == c) || (a == c)) {
        mens = "Triangulo Isósceles";
      } else {
        mens = "Triangulo Escaleno";
      }
    }
  } else {
    mens = "Não é possivel formar um triangulo";
  }

  cout << mens << endl;
  return 0;

}