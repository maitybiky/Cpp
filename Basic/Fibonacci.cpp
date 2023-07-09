#include<iostream>

using namespace std;

void fibbo(int prev, int curr, int range) {
  if (prev == 0) {
    cout << 0 << " ";
  }
  if (prev + curr >= range) return;
  cout << prev + curr << " ";
  fibbo(curr, prev + curr,range);
  return;
}

int main() {
  cout << "Enter range" << endl;
  int range, i = 0;
  cin >> range;
  fibbo(0,1,range);
  return 0;
}