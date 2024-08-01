#include <iostream>
using namespace std;

int MAX = 100;

int main() {
    int m, p, n;
    int A[MAX][MAX], B[MAX][MAX], M[MAX][MAX];

    cout << "Digite as dimensões da matriz A (m x p): ";
    cin >> m >> p;
    cout << "Digite os elementos da matriz A:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
            cin >> A[i][j];
        }
    }

    cout << "Digite as dimensões da matriz B (p x n): ";
    cin >> p >> n;
    cout << "Digite os elementos da matriz B:" << endl;
    for (int i = 0; i < p; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            M[i][j] = 0;
            for (int k = 0; k < p; ++k) {
                M[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Resultado da multiplicação das matrizes:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
