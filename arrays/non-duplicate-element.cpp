#include <iostream>

using namespace std;

int main() {
  cout << "Enter length of array;" << endl;
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int res = 0;

  for (int i = 0; i < n; i++) {
    res = res ^ arr[i];
  }
  cout << "number that appeared odd  is " << res;
  return 0;
}