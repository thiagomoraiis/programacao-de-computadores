#include <iostream>

using namespace std;

int main() {
    int DIMENSAO = 5;

    float matrizA[DIMENSAO][DIMENSAO];
    float somaDiagonalImpar = 0;

    for (int i = 0; i < DIMENSAO; ++i) {
        for (int j = 0; j < DIMENSAO; ++j) {
            cout << "Digite o elemento A[" << i << "][" << j << "]: ";
            cin >> matrizA[i][j];
        }
    }

    for (int i = 0; i < DIMENSAO; ++i) {
        if (i % 2 == 0) {
            somaDiagonalImpar += matrizA[i][i];
        }
    }

    cout << "Somatório dos elementos da diagonal principal em posições ímpares: " << somaDiagonalImpar << endl;

    return 0;
}
