#include <iostream>

using namespace std;

int main() {
    int TAMANHO = 7;

    int matrizA[TAMANHO];
    int matrizB[TAMANHO];
    int matrizC[TAMANHO][2];

    cout << "Digite os elementos da matriz A (7 elementos):\n";
    for (int i = 0; i < TAMANHO; ++i) {
        cout << "Elemento A[" << i << "]: ";
        cin >> matrizA[i];
    }

    cout << "Digite os elementos da matriz B (7 elementos):\n";
    for (int i = 0; i < TAMANHO; ++i) {
        cout << "Elemento B[" << i << "]: ";
        cin >> matrizB[i];
    }

    for (int i = 0; i < TAMANHO; ++i) {
        matrizC[i][0] = matrizA[i];
        matrizC[i][1] = matrizB[i];
    }

    cout << "\nMatriz C:\n";
    for (int i = 0; i < TAMANHO; ++i) {
        cout << matrizC[i][0] << " " << matrizC[i][1] << endl;
    }

    return 0;
}
