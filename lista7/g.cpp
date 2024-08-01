#include <iostream>

using namespace std;

int main() {
    int LINHAS = 4;
    int COLUNAS = 5;

    float matrizA[LINHAS][COLUNAS];
    float matrizB[LINHAS][COLUNAS];

    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            cout << "Temperatura A[" << i << "][" << j << "]: ";
            cin >> matrizA[i][j];
        }
    }

    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            matrizB[i][j] = matrizA[i][j] * 9.0 / 5.0 + 32;
        }
    }

    cout << "\nMatriz A (Temperaturas em Celsius):\n";
    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            cout << matrizA[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatriz B (Temperaturas em Fahrenheit):\n";
    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            cout << matrizB[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
