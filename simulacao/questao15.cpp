#include <iostream>

using namespace std;

int main() {
    int num = 0;
    cout << "Informe o número máximo (deve ser ímpar): ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "O número informado não é ímpar." << endl;
        return 1;
    }

    int vet[num];

    for (int i = 0; i < num; i++) {
        vet[i] = i + 1;
    }

   for (int i = 0; i < num; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int k = i; k < num - i; k++) {
            cout << vet[k] << " ";
            cout << k << " ";
        }
        cout << endl;
    }

    return 0;
}
