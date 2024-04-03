#include <iostream>
using namespace std;

int main() {
  int years_lived, months_lived, days_lived, age, year=365, month=30;
  cout << "Digite quantos anos, meses e dias voce viveu, respectivamente\n";
  cin >> years_lived;
  cin >> months_lived;
  cin >> days_lived;
  cout << "Voce viveu " << (years_lived * year) + (months_lived * month) + days_lived << " dias\n";
  return 0;
}