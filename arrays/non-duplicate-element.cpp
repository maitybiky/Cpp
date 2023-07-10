#include <iostream>

using namespace std;
// all number will be appeared in pair execpt 1 number . find that number
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