#include <iostream>

using namespace std;

int main() {
    int LINHAS = 4;
    int COLUNAS = 5;

    int matriz[LINHAS][COLUNAS];

    cout << "Digite 20 elementos para a matriz (4x5):\n";
    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "\nMatriz:\n";
    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
