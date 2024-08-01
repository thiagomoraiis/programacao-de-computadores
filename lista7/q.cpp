#include <iostream>

using namespace std;

int main() {
    int LINHAS = 4;
    int COLUNAS = 5;

    int matrizA[LINHAS][COLUNAS];
    int matrizB[LINHAS] = {0};
    int matrizC[COLUNAS] = {0};
    int somaTotalB = 0;
    int somaTotalC = 0;

    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            cout << "Digite o elemento A[" << i << "][" << j << "]: ";
            cin >> matrizA[i][j];
        }
    }

    for (int i = 0; i < LINHAS; ++i) {
        int somaLinha = 0;
        for (int j = 0; j < COLUNAS; ++j) {
            somaLinha += matrizA[i][j];
        }
        matrizB[i] = somaLinha;
    }

    for (int j = 0; j < COLUNAS; ++j) {
        int somaColuna = 0;
        for (int i = 0; i < LINHAS; ++i) {
            somaColuna += matrizA[i][j];
        }
        matrizC[j] = somaColuna;
    }

    for (int i = 0; i < LINHAS; ++i) {
        somaTotalB += matrizB[i];
    }
    for (int j = 0; j < COLUNAS; ++j) {
        somaTotalC += matrizC[j];
    }

    cout << "Somatório dos elementos da matriz B: " << somaTotalB << endl;
    cout << "Somatório dos elementos da matriz C: " << somaTotalC << endl;
    cout << "Somatório total: " << (somaTotalB + somaTotalC) << endl;

    return 0;
}
