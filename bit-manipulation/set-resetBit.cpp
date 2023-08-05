#include<iostream>

using namespace std;

int decimalToBinary(int d) {
  string binary = "";
  int i = 0;
  while (d > 0) {
    int rest = d % 2;
    binary.insert(i, to_string(rest));
    d = d / 2;
    i++;
  }

  //reverse binary
  string rev = "";
  for (int i = binary.length() - 1; i >= 0; i--) {
    rev += binary[i];
  }

  return stoi(rev);
}
int setBit(int num, int p) {

  return (num | (1 << p));

}

int bitReset(int n, int p) {
  int com1 = ~(1 << p);
  return (n & com1);
}

int main() {
  cout << "Enter any number" << endl;
  int n, p;
  cin >> n;
  cout << "Enter position" << endl;
  cin >> p;
  cout << decimalToBinary(n) << "initial" << endl;
  cout << decimalToBinary(bitReset(n, p)) << "bit reset" << endl;
  cout << decimalToBinary(setBit(n, p)) << "bit set";
  return 0;
}