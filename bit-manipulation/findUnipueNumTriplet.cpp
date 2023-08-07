#include<iostream>

using namespace std;

int power(int num, int p) {
  int sum = 1;
  if (p == 0) return 1;
  for (int i = 0; i < p; i++) {
    sum *= num;
  }
  return sum;
}
int main() {

int arr[]={1,1,500,3,1,9,500,3,3,500};
  int xorAll;

  int arrOfsetBitCount[8];
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 10; j++) {
      if ((arr[j] & (1 << i)) != 0) {
        arrOfsetBitCount[i]++;
      }
    }
  }
  int num = 0;
  for (int i = 0; i < 8; i++) {
    int val = (arrOfsetBitCount[i] % 3 == 0 ? 0 : 1);
    num += (val * power(2, i));
  }

  cout << "ans " << num << endl;
  return 0;
}