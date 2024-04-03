#include <iostream>
using namespace std;

int main() {
  double nota1, nota2, nota3, nota_final;
  cout << "Insira a nota 1, 2 e 3, respectivamente :\n";
  cin >> nota1;
  cin >> nota2;
  cin >> nota3;
  nota1 *= 2;
  nota2 *= 3;
  nota3 *= 5;
  nota_final = (nota1 + nota2 + nota3) / 10;

  cout << "A nota final do aluno foi " << nota_final;
  return 0;
}