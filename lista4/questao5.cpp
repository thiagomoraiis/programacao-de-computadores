#include <iostream>
#include <vector>

using namespace std;

int main() {
  int array_size = 10;
  double medias_alunos[array_size];
  double nota1 = 0.0, nota2 = 0.0, nota3 = 0.0, nota4 = 0.0, media = 0.0;
  int contador = 0;

  for (int i = 0; i < array_size; i++) {
    cout << "Para o aluno " << i << " digite as suas notas:" <<  endl;
    cin >> nota1;
    cin >> nota2;
    cin >> nota3;
    cin >> nota4;

    media = (nota1 + nota2 + nota3 + nota4) / 4;
    medias_alunos[i] = media;
  }

  for (int nota = array_size; nota >= 1; nota--) {
    if (medias_alunos[nota] >= 7.0) {
      contador++;
    }
  }
  cout << contador << " alunos tiveram media maior ou igual a 70" << endl;

  return 0;
}