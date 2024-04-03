#include <iostream>

using namespace std;

int main() {
  int count = 0, aux = 0;

  for (int i = 1; i <= 50; i++) {
    aux = 0;

    for (int j = 1; j <= i; j++) {
      if (i % j == 0) {
        aux+=1;
      }
    }

    if (aux == 2) {
      cout << i << endl;
      count+=i;
    }
  }
  cout << count << endl;
}