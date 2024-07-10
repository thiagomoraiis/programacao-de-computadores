#include <iostream>

using namespace std;

int main() {
  int n, peso = 0;
  double media_aritmetica = 0.0, media_ponderada = 0.0;

  cout << "Informe o tamanho do vetor:" << endl;
  cin >> n;
  int v[n];

  for (int i = 0; i <= n; i++) {
    v[i] = i;
    peso += i;
    
    media_aritmetica += v[i];
    media_ponderada += (v[i] * i);
    cout << media_aritmetica << endl;
    cout << media_ponderada << endl;
  }

  cout << "A media aritmetica é: " << media_aritmetica / n << endl;
  cout << "A media ponderada é: " << media_ponderada / peso << endl;

  return 0;
}
