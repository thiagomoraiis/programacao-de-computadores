#include <iostream>
using namespace std;

int main() {
    int idade = 0, array_length = 5; 
    double altura = 0.0;
    double array_altura[array_length];
    int array_idade[array_length];

    for (int i = 0; i < 5; i++) {
        cout << "Digite uma idade: ";
        cin >> idade;
        array_idade[i] = idade;

        cout << "Digite uma altura: ";
        cin >> altura;
        array_altura[i] = altura;
    }

    for (int i = 4; i > 0; i--) {
        cout << "Altuda da pessoa " << i << ": " << array_altura[i] << endl;
        cout << "Idade da pessoa " << i << ": "<< array_idade[i] << endl;
        cout << endl;
    }

    return 0;
}