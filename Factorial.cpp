#include<iostream>

using namespace std;

void facto(int num, int res = 0) {
  if (res == 0) {
    res = num == 1 ? 0 : num;
  }
  cout << num;
  if (num == 1) {
    cout << "\n Factorial is " << res << endl;
    return;
  };
  cout << "x";
  facto(num - 1, res * (num - 1));
  return;
}
int main() {
  cout << "Enter a number for factorial" << endl;
  int numInput;
  cin >> numInput;

  facto(numInput);
  return 0;
}