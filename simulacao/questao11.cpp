#include <iostream>

using namespace std;

int main() {
  double fib0 = 1;
  double fib1 = 1;
  double fib2 = fib0 + fib1;

  cout << fib2 << endl;

  for (int i = 3; i < 1000; i++) {
    fib0 = fib1;
    fib1 = fib2;
    fib2 = fib0 + fib1;
    int integer = fib2;

    if (integer % 2 == 0) {
      cout << fib2 << endl;
    }
  }

  return 0;
}