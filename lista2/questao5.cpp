#include <iostream>

using namespace std;

int main() {
  int homem1, homem2, mulher1, mulher2;
  int homem_mais_novo, homem_mais_velho, mulher_mais_nova, mulher_mais_velha;
  double soma, produto;
  cout << "Insira a idade do homem 1 e 2, respectivamente" << endl;
  cin >> homem1;
  cin >> homem2;
  cout << "Insira a idade da mulher 1 e 2, respectivamente" << endl;
  cin >> mulher1;
  cin >> mulher2;

  if (homem1 != homem2 && mulher1 != mulher2) {
    if (homem1 > homem2) {
      homem_mais_velho = homem1;
      homem_mais_novo = homem2;
    } else {
      homem_mais_velho = homem2;
      homem_mais_novo = homem1;
    }

    if (mulher1 > mulher2) {
      mulher_mais_velha = mulher1;
      mulher_mais_nova = mulher2;
    } else {
      mulher_mais_velha = mulher2;
      mulher_mais_nova = mulher1;
    }

    soma = homem_mais_velho + mulher_mais_nova;
    produto = mulher_mais_velha * homem_mais_novo;

    cout << "A soma das idades do homem mais velho e a mulher mais nova é " << soma << endl;
    cout << "O produto das idades do homem mais novo e a mulher mais velha é " << produto << endl;
  } else {
    cout << "As idades dos homens e mulheres devem ser diferentes entre si" << endl;
  }
  return 0;
}