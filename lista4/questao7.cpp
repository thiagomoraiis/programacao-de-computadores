#include <iostream>
#include <vector>

using namespace std;

int main() {
  int X, array_length = 10;
  int A[array_length];
  bool achei_x;

  for (int num = 0; num < array_length; num++) {
    A[num] = num;
  }
  cout << "Infome um numero:" << endl;
  cin >> X;

  for (int num: A) {
    if (X != num) {
      achei_x = false;
    } else {
      achei_x = true;
      break;
    }
  }

  achei_x ? cout << "Achei!" << endl : cout << "Não achei!" << endl;

  return 0;
}