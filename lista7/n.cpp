#include <iostream>

using namespace std;

int main() {
    int LINHAS = 7;
    int COLUNAS = 7;

    int matrizA[LINHAS][COLUNAS];
    int totalPares = 0;

    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            cout << "Digite o elemento A[" << i << "][" << j << "]: ";
            cin >> matrizA[i][j];
        }
    }

    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            if (matrizA[i][j] % 2 == 0) {
                totalPares++;
            }
        }
    }

    cout << "Total de elementos pares na matriz: " << totalPares << endl;

    return 0;
}
