#include <iostream>

using namespace std;

int main() {
    int size, value;
    cout << "Informe o tamanho do vetor:" << endl;
    cin >> size;
    int v[size];
    int last = v[size -1];

    for (int i = 0; i < size; i++) {
        cout << "Informe um valor para ser inserido no vetor:" << endl;
        cin >> value;
        v[i] = value;
    }

    cout << "[";
    for (int i = 0; i < size; i++) {
        if (v[i] + 1 == v[i + 1]) {
            cout << v[i] << ", ";
        } else {
            v[i] != v[size - 1] ? cout << v[i] << "; ": cout << v[i];
        }
    }
    cout << "]" << endl;
    cout << "O ultimo item do vetor: " << v[size - 1] << endl;

    return 0;
}
