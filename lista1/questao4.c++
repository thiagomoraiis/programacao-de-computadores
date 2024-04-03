#include <iostream>
using namespace std;

int main() {
  float celsius, fahrenheit;
  cout << "Insira o valor em fahrenheit\n";
  cin >> fahrenheit;
  celsius = ((fahrenheit - 32) * 5) / 9;
  cout << "O valor em celsius é " << celsius << "\n";
  return 0;
}