#include <iostream>

using namespace std;

int bcd(int fst, int sec) {
  if (sec > fst) {
    int t = fst;
    fst = sec;
    sec = t;
  }

  while (sec != 0) {
    int t = sec;
    sec = fst % sec;
    fst = t;
  }
  return fst;
}

int main() {
  int a, b;
  cin >> a;
  cin >> b;

  cout << bcd(a, b); << endl;
  return 0;
}