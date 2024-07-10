#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
  int length = 2;
  double vet_preco_produto[length];
  double preco_produto = 0.0;
  double valor_usuario = 0.0;
  string vet_nome_produto[length];
  string nome_produto = "";

  for (int i = 0; i < length; i++) {
    cout << "Informe o nome do produto " << i + 1 << ":" << endl;
    getline(cin, nome_produto);
    // cin >> nome_produto;
    vet_nome_produto[i] = nome_produto;

    cout << "Informe o preço do produto " << i + 1 << ":" << endl;
    cin >> preco_produto;
    vet_preco_produto[i] = preco_produto;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }

  cout << endl << "Informe um valor para pesquisar" << endl;
  cin >> valor_usuario;
  cout << endl << "Lista dos produto de ate " << valor_usuario << endl;

  for (int i = 0; i < length; i++) {
    if (vet_preco_produto[i] < valor_usuario) {
      cout << "Nome do produto " << i + 1 << ":" << vet_nome_produto[i] << endl;
      cout << "Preço do produto " << i + 1 << ":" << vet_preco_produto[i] << endl;
      cout << endl;
    }
  }

  return 0;
}

// Escreva um programa que leia o nome e o preço de 10 produtos. Logo após realizar
// o cadastro dos produtos, pedir para o usuário digitar um valor, no qual deverá
// ser realizada uma pesquisa e exibir apenas os produtos que possuem preço até o
// valor digitado pelo usuário.
