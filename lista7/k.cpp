#include <iostream>

using namespace std;

int main() {
    int DIMENSAO = 5;

    float matrizA[DIMENSAO][DIMENSAO];
    float somaDiagonal = 0;

    for (int i = 0; i < DIMENSAO; ++i) {
        for (int j = 0; j < DIMENSAO; ++j) {
            cout << "Digite o elemento A[" << i << "][" << j << "]: ";
            cin >> matrizA[i][j];
        }
    }

    for (int i = 0; i < DIMENSAO; ++i) {
        somaDiagonal += matrizA[i][i];
    }

    cout << "Somatório dos elementos da diagonal principal: " << somaDiagonal << endl;

    return 0;
}
