#include <iostream>
#include <string>

using namespace std;

int main() {
    int NUM_ALUNOS = 8;
    int NUM_NOTAS = 4;
    
    string nomes[NUM_ALUNOS];
    float notas[NUM_ALUNOS][NUM_NOTAS];
    float medias[NUM_ALUNOS];
    float mediaGeral = 0.0;

    for (int i = 0; i < NUM_ALUNOS; ++i) {
        cout << "Digite o nome do aluno " << (i + 1) << ": ";
        cin >> nomes[i];

        float somaNotas = 0.0;
        for (int j = 0; j < NUM_NOTAS; ++j) {
            cout << "Digite a nota " << (j + 1) << " de " << nomes[i] << ": ";
            cin >> notas[i][j];
            somaNotas += notas[i][j];
        }

        medias[i] = somaNotas / NUM_NOTAS;
        mediaGeral += medias[i];
    }

    mediaGeral /= NUM_ALUNOS;

    cout << "\nRelatório de Notas:\n";
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        cout << "Aluno: " << nomes[i] << endl;
        cout << "Média: " << medias[i] << endl;
        cout << "------------------------\n";
    }
    cout << "Média Geral dos Alunos: " << mediaGeral << endl;

    return 0;
}
