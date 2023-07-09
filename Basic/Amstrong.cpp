#include<iostream>

using namespace std;

int power(int num, int suff) {
  int constNum = num;
  for (int i = 1; i < suff; i++) {
    num *= constNum;
  }
  return num;
}

int getDigit(int num) {
  int counter = 0;
  while (num > 0) {
    counter++;
    num /= 10;
  }
  return counter;
}
int main() {
  cout << "Enter Number to check amstrong or not" << endl;
  int num, numed = 0;
  cin >> num;
  int digit = getDigit(num);
  while (num > 0) {
    numed += power(num % 10, digit);
    num /= 10;
  }
  if (numed == num) cout << num << " is amstrong number";
  else cout << num << " is not amstrong number";
  return 0;
}