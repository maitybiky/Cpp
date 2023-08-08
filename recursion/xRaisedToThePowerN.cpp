#include<iostream>

using namespace std;

float xpn(float x, float n) {
  if (n < 0) {
    if (n == 0) return 1 ;
    return ((1/x) * xpn(x, n + 1));
  }

  if (n == 0) return 1;
  return x * xpn(x, n - 1);
}

int main() {

  float x, n;
  cin >> x;
  cin >> n;
  cout << xpn(x, n);
  return 0;
}