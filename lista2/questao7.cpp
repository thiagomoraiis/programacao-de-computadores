#include <iostream>

using namespace std;

int main() {
  double nota1, nota2, nota3, media, media_exercicios;
  char conceito;
  cout << "Digite a nota 1, 2 e 3; respectivamente:" << endl;
  cin >> nota1;
  cin >> nota2;
  cin >> nota3;
  cout << "Digite a media dos exercicios:" << endl;
  cin >> media_exercicios;

  media = (nota1 + (nota2 * 2) + (nota3 * 3) + media_exercicios) / 7;

  if (media >= 9.0) {
    conceito = 'A';
  } else if (media >= 7.5 && media < 9.0) {
    conceito = 'B';
  } else if (media >= 6.0 && media < 7.5) {
    conceito = 'C';
  } else if (media < 60){
    conceito = 'D';
  }

  cout << "O conceito do aluno foi " << conceito << endl;

  return 0;
}