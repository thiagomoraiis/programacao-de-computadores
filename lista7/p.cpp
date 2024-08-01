#include <iostream>

using namespace std;

int main() {
    int LINHAS = 10;
    int COLUNAS = 7;

    int matrizA[LINHAS][COLUNAS];
    int totalPares = 0;
    int totalImpares = 0;
    int totalElementos = LINHAS * COLUNAS;

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
            } else {
                totalImpares++;
            }
        }
    }

    float percentualPares = (static_cast<float>(totalPares) / totalElementos) * 100;
    float percentualImpares = (static_cast<float>(totalImpares) / totalElementos) * 100;

    cout << "Total de elementos pares: " << totalPares << endl;
    cout << "Total de elementos ímpares: " << totalImpares << endl;
    cout << "Percentual de elementos pares: " << percentualPares << "%" << endl;
    cout << "Percentual de elementos ímpares: " << percentualImpares << "%" << endl;

    return 0;
}
