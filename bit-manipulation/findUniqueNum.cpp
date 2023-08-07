#include<iostream>

using namespace std;

int main() {
  int arr[7] = {1,5,1,3,5,2,2
  };
  int res;
  for (int i = 0; i < 7; i++) {
    res = (res ^ arr[i]);
  }
  cout << res << " is a unique number" << endl;
  return 0;
}