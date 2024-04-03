#include <iostream>
#include <vector>
using namespace std;

int main() {
  int array_length = 10;
  double arr[array_length];
  double num = 0;
  
  for (int i = 0; i < array_length; i++) {
    num = i * 3.14;
    arr[i] = num;
  }

  for (int i = (array_length - 1); i > 0; i--) {
    cout << arr[i] << endl;
  }
  return 0;
}