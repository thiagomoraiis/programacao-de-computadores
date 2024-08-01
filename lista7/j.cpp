#include <iostream>

using namespace std;

int main() {
    int LINHAS = 6;
    int COLUNAS = 5;

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
            if (matrizA[i][j] % 2 == 0) {
                matrizB[i][j] = matrizA[i][j] + 5;
            } else {
                matrizB[i][j] = matrizA[i][j] - 4;
            }
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
