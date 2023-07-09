#include<iostream>

using namespace std;

int main() {
  cout << "Enter Number" << endl;
  int num, rev;
  cin >> num;

  while (num > 0) {
    rev = rev * 10 + num % 10;
    num /= 10;
  }
  cout << rev << endl;
  return 0;
}