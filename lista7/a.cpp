#include <iostream>

using namespace std;

int main() {
    int LINHAS = 5;
    int COLUNAS = 3;

    int matrizA[LINHAS][COLUNAS];
    int matrizB[LINHAS][COLUNAS];
    int matrizC[LINHAS][COLUNAS];

    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            cout << "Elemento A[" << i << "][" << j << "]: ";
            cin >> matrizA[i][j];
        }
    }

    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            cout << "Elemento B[" << i << "][" << j << "]: ";
            cin >> matrizB[i][j];
        }
    }

    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    cout << "\nMatriz C (soma de A e B):\n";
    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            cout << matrizC[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
