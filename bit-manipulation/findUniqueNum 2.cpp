#include<iostream>

using namespace std;

int main() {
  int arr[]={1,5,1,3,5,2,2,7}
  int res;
  for (int i = 0; i < 8; i++) {
    res = (res ^ arr[i]);
  }

  cout << "res" << res << endl;
  int setBit = 0;
  int pos = 0;
  while (setBit != res) {
    setBit = (res & (1 << pos));
    pos++;
  }
  cout << "pos" << pos << endl;
  int finalXor;
  for (int i = 0; i < 8; i++) {
    if ((arr[i] & (1 << (pos - 1))) != 0) {
      finalXor = finalXor ^ arr[i];
    }
  }
  cout << finalXor << " and " << (finalXor ^ res) << " is a unique number" << endl;

  return 0;
}