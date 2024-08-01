#include <iostream>

using namespace std;

int main() {
    int DIMENSAO = 7;

    int matrizA[DIMENSAO][DIMENSAO];
    int matrizB[DIMENSAO][DIMENSAO];

    for (int i = 0; i < DIMENSAO; ++i) {
        for (int j = 0; j < DIMENSAO; ++j) {
            cout << "Digite o elemento A[" << i << "][" << j << "]: ";
            cin >> matrizA[i][j];
        }
    }

    for (int i = 0; i < DIMENSAO; ++i) {
        for (int j = 0; j < DIMENSAO; ++j) {
            if (i == j) {
                if ((i + 1) % 2 != 0) {
                    int resultado = 1;
                    for (int k = 1; k <= matrizA[i][j]; ++k) {
                        resultado *= k;
                    }
                    matrizB[i][j] = resultado;
                } else {
                    int resultado = 0;
                    for (int k = 1; k <= matrizA[i][j]; ++k) {
                        resultado += k;
                    }
                    matrizB[i][j] = resultado;
                }
            } else {
                int resultado = 0;
                for (int k = 1; k <= matrizA[i][j]; ++k) {
                    resultado += k;
                }
                matrizB[i][j] = resultado;
            }
        }
    }

    cout << "\nMatriz B:\n";
    for (int i = 0; i < DIMENSAO; ++i) {
        for (int j = 0; j < DIMENSAO; ++j) {
            cout << matrizB[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
