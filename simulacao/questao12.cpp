#include <iostream>

using namespace std;

int main () {
  int length = 10;
  int x[length] = {};
  int y[length] = {};
  int z[length*2] = {};
  int zLength = sizeof(z) / sizeof(int);


  for (int i = 0; i < length; i++) {
    x[i] = i * 2;
    y[i] = i * 2 + 1;
  }

  for (int i = 0; i < zLength; i++) {
    if (i % 2 == 0) {
      z[i] = x[i / 2];
    } else {
      z[i] = y[i / 2];
    }

    cout << z[i] << endl;
  }
}