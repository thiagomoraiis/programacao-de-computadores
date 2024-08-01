#include <iostream>

using namespace std;

int main() {
    int LINHAS = 5;
    int COLUNAS = 6;

    int matrizA[LINHAS][COLUNAS];
    int matrizB[LINHAS][COLUNAS];
    int matrizC[LINHAS][COLUNAS];

    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            int valor;
            do {
                cout << "Digite um valor par para A[" << i << "][" << j << "]: ";
                cin >> valor;
            } while (valor % 2 != 0);
            matrizA[i][j] = valor;
        }
    }

    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            int valor;
            do {
                cout << "Digite um valor ímpar para B[" << i << "][" << j << "]: ";
                cin >> valor;
            } while (valor % 2 == 0);
            matrizB[i][j] = valor;
        }
    }

    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    cout << "Matriz C (soma de A e B):" << endl;
    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            cout << matrizC[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
