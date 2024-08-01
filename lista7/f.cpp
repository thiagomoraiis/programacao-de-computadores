#include <iostream>

using namespace std;

int main() {
    int LINHAS = 5;
    int COLUNAS = 4;

    int matrizA[LINHAS][COLUNAS];
    int matrizB[LINHAS][COLUNAS];

    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            cout << "Digite o elemento A[" << i << "][" << j << "]: ";
            cin >> matrizA[i][j];
        }
    }

    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            int fatorial = 1;
            for (int k = 1; k <= matrizA[i][j]; ++k) {
                fatorial *= k;
            }
            matrizB[i][j] = fatorial;
        }
    }

    cout << "\nMatriz A:\n";
    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            cout << matrizA[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatriz B:\n";
    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            cout << matrizB[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
