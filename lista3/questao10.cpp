#include <iostream>

using namespace std;

int main() {
  double nota1=-1, nota2=-1;
  cout << "Digite a primeira nota" << endl;
  cin >> nota1;
  cout << "Digite a segunda nota" << endl;
  cin >> nota2;
  
  while (nota1 < 0  || nota1 > 10) {
    cout << "A primeira nota não esta entre o intervalo. Digite novamente" << endl;
    cin >> nota1;
  }
  while (nota2 < 0 || nota2 > 10) {
    cout << "A primeira nota não esta entre o intervalo. Digite novamente" << endl;
    cin >> nota2;
  }

  return 0;
}