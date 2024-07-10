#include <iostream>

using namespace std;

int main() {
    int elemento, n;
    cout << "Informe o tamanho do array:" << endl;
    cin >> n;
    cout << "Informe elemento que deseja remover: " << endl;
    cin >> elemento;
    int v[n];
    
    cout << "Array original:" << endl;
    for (int i = 0; i < n; ++i) {
        v[i] = i;
        cout << v[i] << " ";
    }
    cout << endl;
    
    int found = false;
    
    for (int i = 0; i < n; ++i) {
        if (v[i] == elemento) {
            found = true;
            
            for (int j = i; j < n - 1; ++j) {
                v[j] = v[j + 1];
            }
            
            --n;
            break;
        }
    }
    
    if (found) {
        cout << "Elemento " << elemento << " removido do array." << endl;
    } else {
        cout << "Elemento " << elemento << " não encontrado no array." << endl;
    }
    
    cout << "Array após remoção do elemento " << elemento << ":" << endl;
    for (int i = 0; i < n; ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
