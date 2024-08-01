#include <iostream>

using namespace std;

int main() {
    int LINHAS = 8;
    int COLUNAS = 6;

    float matrizA[LINHAS][COLUNAS];
    float matrizB[LINHAS];
    float somaTotalB = 0;

    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            cout << "Digite o elemento A[" << i << "][" << j << "]: ";
            cin >> matrizA[i][j];
        }
    }

    for (int i = 0; i < LINHAS; ++i) {
        float somaLinha = 0;
        for (int j = 0; j < COLUNAS; ++j) {
            somaLinha += matrizA[i][j];
        }
        matrizB[i] = somaLinha;
    }

    for (int i = 0; i < LINHAS; ++i) {
        somaTotalB += matrizB[i];
    }

    cout << "Somatório dos elementos da matriz B: " << somaTotalB << endl;

    return 0;
}
