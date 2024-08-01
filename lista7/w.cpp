#include <iostream>

using namespace std;

int main() {
    int LINHAS = 5;
    int COLUNAS = 5;

    int matrizA[LINHAS][COLUNAS];
    int matrizB[LINHAS][COLUNAS];

    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            cin >> matrizA[i][j];
        }
    }

    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            if (i + j == COLUNAS - 1) {
                matrizB[i][j] = 3 * matrizA[i][j];
            } else {
                matrizB[i][j] = 2 * matrizA[i][j];
            }
        }
    }

    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            cout << matrizB[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
