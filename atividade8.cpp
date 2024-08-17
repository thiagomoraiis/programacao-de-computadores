#include<iostream>
using namespace std;

void somaMatrizes(int LINHAS, int COLUNAS){
    int matrizA[LINHAS][COLUNAS];
    int matrizB[LINHAS][COLUNAS];
    int matrizC[LINHAS][COLUNAS];

    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            cout << "Elemento A[" << i << "][" << j << "]: ";
            cin >> matrizA[i][j];
        }
    }

    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            cout << "Elemento B[" << i << "][" << j << "]: ";
            cin >> matrizB[i][j];
        }
    }

    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    cout << "\nMatriz C (soma de A e B):\n";
    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            cout << matrizC[i][j] << " ";
        }
        cout << endl;
    }
}

void preencherEMostrarMatrizes(int TAMANHO){
    int matrizA[TAMANHO];
    int matrizB[TAMANHO];
    int matrizC[TAMANHO][2];

    cout << "Digite os elementos da matriz A (" << TAMANHO << " elementos):\n";
    for (int i = 0; i < TAMANHO; ++i) {
        cout << "Elemento A[" << i << "]: ";
        cin >> matrizA[i];
    }

    cout << "Digite os elementos da matriz B (" << TAMANHO << " elementos):\n";
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
}

void preencherEMostrarMatriz(int LINHAS, int COLUNAS){
    int matriz[LINHAS][COLUNAS];

    cout << "Digite " << LINHAS * COLUNAS << " elementos para a matriz (" << LINHAS << "x" << COLUNAS << "):\n";
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
}

void processarMatriz(int TAMANHO, int matrizA[], int matrizC[][3]){
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
}

void processarMatrizes(int TAMANHO, float matrizA[], float matrizB[], float matrizC[][2]){
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
}

void processarMatrizesQuadrada(int LINHAS, int COLUNAS){
    int matrizA[LINHAS][COLUNAS];
    int matrizB[LINHAS][COLUNAS];

    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            cout << "Digite o elemento A[" << i << "][" << j << "]: ";
            cin >> matrizA[i][j];
        }
    }

    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            int fatorial = 1;
            for (int k = 1; k <= matrizA[i][j]; ++k) {
                fatorial *= k;
            }
            matrizB[i][j] = fatorial;
        }
    }

    cout << "\nMatriz A:\n";
    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            cout << matrizA[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatriz B:\n";
    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            cout << matrizB[i][j] << " ";
        }
        cout << endl;
    }
}

void converterTemperaturas(int LINHAS, int COLUNAS){
    float matrizA[LINHAS][COLUNAS];
    float matrizB[LINHAS][COLUNAS];

    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            cout << "Temperatura A[" << i << "][" << j << "]: ";
            cin >> matrizA[i][j];
        }
    }

    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            matrizB[i][j] = matrizA[i][j] * 9.0 / 5.0 + 32;
        }
    }

    cout << "\nMatriz A (Temperaturas em Celsius):\n";
    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            cout << matrizA[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatriz B (Temperaturas em Fahrenheit):\
