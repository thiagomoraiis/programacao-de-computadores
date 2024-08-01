#include <iostream>

using namespace std;

int main() {
    int TAMANHO = 4;
    
    int A[TAMANHO];
    int B[TAMANHO];
    int C[TAMANHO];
    int D[TAMANHO];
    int E[TAMANHO][TAMANHO];

    auto fatorial = [](int n) {
        int resultado = 1;
        for (int i = 1; i <= n; ++i) {
            resultado *= i;
        }
        return resultado;
    };

    cout << "Digite os elementos da matriz A:" << endl;
    for (int i = 0; i < TAMANHO; ++i) {
        cin >> A[i];
    }
    
    cout << "Digite os elementos da matriz B:" << endl;
    for (int i = 0; i < TAMANHO; ++i) {
        cin >> B[i];
    }
    
    cout << "Digite os elementos da matriz C:" << endl;
    for (int i = 0; i < TAMANHO; ++i) {
        cin >> C[i];
    }
    
    cout << "Digite os elementos da matriz D:" << endl;
    for (int i = 0; i < TAMANHO; ++i) {
        cin >> D[i];
    }

    for (int i = 0; i < TAMANHO; ++i) {
        E[0][i] = 2 * A[i];
        E[1][i] = 3 * B[i];
        E[2][i] = 4 * C[i];
        E[3][i] = fatorial(D[i]);
    }
    
    cout << "Matriz E:" << endl;
    for (int i = 0; i < TAMANHO; ++i) {
        for (int j = 0; j < TAMANHO; ++j) {
            cout << E[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
