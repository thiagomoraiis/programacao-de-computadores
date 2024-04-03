#include <iostream>

using namespace std;

int main() {
  int codigo_usuario, senha_usuario, senha = 999, codigo = 1234;
  cout << "Informe seu codigo:" << endl;
  cin >> codigo_usuario;

  if (codigo_usuario != codigo) {
    cout << "Usuario invalido!!!" << endl;
    return 0;
  }

  cout << "Informe a senha:" << endl;
  cin >> senha_usuario;

  if (senha_usuario != senha) {
    cout << "Senha incorreta!!!" << endl;
    return 0;
  }
  
  cout << "Acesso permitido!" << endl;
  return 0;
}