#include <iostream>

using namespace std;

int firstocc(int arr[], int num, int n = 0) {

  if (!arr[0]) return -1;
  if (arr[0] == num) return n;
  return firstocc(arr + 1, num, n + 1);

}

int lastocc(int arr[], int num, int n) {
  if (n == 0) return -1;
  if (arr[n] == num) return n;
  return lastocc(arr, num, n - 1);
}
int main() {
  int arr[] = {5,4,5,2,6,1, 8,3,2, 9, 4,2,7};
  int n, f;
  cin >> n;
  cout << firstocc(arr, n) << endl;
  cout << lastocc(arr, n, sizeof(arr)) << endl;

  return 0;
}