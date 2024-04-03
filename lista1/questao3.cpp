#include <iostream>

using namespace std;

int main() {
  float celsius, fahrenheit;
  cout << "Digite o valor da temperatura\n";
  cin >> celsius;
  fahrenheit = celsius * 9 / 5 + 32;
  cout << "A temperatura em fahrenhei é " << fahrenheit;
}