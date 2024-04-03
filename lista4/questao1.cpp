#include <iostream>
#include <vector>
using namespace std;

int main() {
  int array_length = 5;
  int arr[array_length];
  
  for (int i = 0; i < array_length; i++)
    arr[i] = i;

  for (int item: arr){
      cout << item << endl;
  }
  return 0;
}