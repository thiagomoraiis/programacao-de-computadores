#include <iostream>

using namespace std;

int main() {
    int LINHAS = 4;
    int COLUNAS = 5;

    int matrizA[LINHAS][COLUNAS];
    int matrizB[LINHAS][COLUNAS];
    int matrizC[LINHAS][COLUNAS];

    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            int valor;
            do {
                cout << "Digite um valor divisível por 3 ou 4 para A[" << i << "][" << j << "]: ";
                cin >> valor;
            } while (valor % 3 != 0 && valor % 4 != 0);
            matrizA[i][j] = valor;
        }
    }

    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            int valor;
            do {
                cout << "Digite um valor divisível por 5 e 6 para B[" << i << "][" << j << "]: ";
                cin >> valor;
            } while (valor % 5 != 0 || valor % 6 != 0);
            matrizB[i][j] = valor;
        }
    }

    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            matrizC[i][j] = matrizA[i][j] * matrizB[i][j];
        }
    }

    cout << "Matriz C (multiplicação de A por B):" << endl;
    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            cout << matrizC[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
