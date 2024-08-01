#include <iostream>

using namespace std;

int main() {
    int TAMANHO = 12;

    float matrizA[TAMANHO];
    float matrizB[TAMANHO];
    float matrizC[TAMANHO][2];

    for (int i = 0; i < TAMANHO; ++i) {
        cout << "Elemento A[" << i << "]: ";
        cin >> matrizA[i];
    }

    for (int i = 0; i < TAMANHO; ++i) {
        cout << "Elemento B[" << i << "]: ";
        cin >> matrizB[i];
    }

    for (int i = 0; i < TAMANHO; ++i) {
        matrizC[i][0] = matrizA[i] * 2;
        matrizC[i][1] = matrizB[i] - 5;
    }

    cout << "\nMatriz A:\n";
    for (int i = 0; i < TAMANHO; ++i) {
        cout << matrizA[i] << " ";
        if ((i + 1) % 6 == 0) cout << endl;
    }

    cout << "\nMatriz B:\n";
    for (int i = 0; i < TAMANHO; ++i) {
        cout << matrizB[i] << " ";
        if ((i + 1) % 6 == 0) cout << endl;
    }

    cout << "\nMatriz C:\n";
    for (int i = 0; i < TAMANHO; ++i) {
        cout << matrizC[i][0] << " " << matrizC[i][1] << endl;
    }

    return 0;
}
