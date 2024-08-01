#include <iostream>

using namespace std;

int main() {
    int DIMENSAO = 15;

    int matrizA[DIMENSAO][DIMENSAO];
    int somaParesDiagonal = 0;

    for (int i = 0; i < DIMENSAO; ++i) {
        for (int j = 0; j < DIMENSAO; ++j) {
            cout << "Digite o elemento A[" << i << "][" << j << "]: ";
            cin >> matrizA[i][j];
        }
    }

    for (int i = 0; i < DIMENSAO; ++i) {
        if (matrizA[i][i] % 2 == 0) {
            somaParesDiagonal += matrizA[i][i];
        }
    }

    cout << "Somatório dos elementos pares da diagonal principal: " << somaParesDiagonal << endl;

    return 0;
}
