#include<iostream>

using namespace std;

void printPrime(int range) {
  int integers[range] = {
    0
  };

  for (int i = 2; i <= range; i++) {
    integers[i] = i;
  }

  for (int i = 2;
    (i * i) <= range; i++) {
    if (integers[i] == i) {
      for (int j = i * i; j <= range; j += i) {
        if (integers[j] == j) {
          integers[j] = i;
        }
      }
    }
  }

  while (range != 1) {
    cout << " " << integers[range];
    range = range / integers[range];
  }

}

int main() {
  cout << "range?" << endl;
  int n;
  cin >> n;
  printPrime(n);
  cout << endl;
  return 0;
}