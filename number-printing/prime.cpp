#include<iostream>

using namespace std;

void printPrime(int range) {
  int integers[range] = {
    0
  };

  for (int i = 2;
    (i * i) <= range; i++) {

    if (integers[i] == 0) {
      for (int j = i * i; j < range; j += i) {
        integers[j] = 1;
      }
    }

  }

  for (int i = 2; i < range; i++) {
    if (integers[i] == 0) {
      cout << " " << i << " ";
    }
  }
}

int main() {
  cout << "range?" << endl;
  cin >> n;
  printPrime(n);
  cout<<endl;
  return 0;
}