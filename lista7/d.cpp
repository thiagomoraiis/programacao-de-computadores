#include <iostream>

using namespace std;

int main() {
    int TAMANHO = 10;
    int matrizA[TAMANHO];
    int matrizC[TAMANHO][3];

    for (int i = 0; i < TAMANHO; ++i) {
        cout << "Digite o elemento A[" << i << "]: ";
        cin >> matrizA[i];
    }

    for (int i = 0; i < TAMANHO; ++i) {
        matrizC[i][0] = matrizA[i] + 5;

        int fatorial = 1;
        for (int j = 1; j <= matrizA[i]; ++j) {
            fatorial *= j;
        }
        matrizC[i][1] = fatorial;

        matrizC[i][2] = matrizA[i] * matrizA[i];
    }

    cout << "\nMatriz C:\n";
    for (int i = 0; i < TAMANHO; ++i) {
        cout << matrizC[i][0] << " " << matrizC[i][1] << " " << matrizC[i][2] << endl;
    }

    return 0;
}
