#include <iostream>

#include <conio.h>

#include "superscript.h"

using namespace std;

int * getArr(int n) {
  int i;

  //filling array
  int * arr = new int[n];

  cout << "ok, now enter all " << n << " number one by one" << endl;

  for (int i = 0; i < n; i++) {
    for (int j = 1; j < i + 1; j++) {
      cout << "[" << arr[j - 1] << "]" << getSuperscriptForm(j - 1) << " ";
    }
    cout << "[..";
    cin >> arr[i];

    if (i < (n - 1)) clrscr();

  }
  clrscr();
  cout << "Here is your arr" << endl;
  cout << "[ ";
  for (int i = 0; i < n; i++) {
    cout << arr[i];
    if (i < n - 1) cout << " , ";
  }
  cout << "]" << endl;

  return arr;
}

int main() {
  int n;
  cout << "Enter length how many number to work with;" << endl;
  cin >> n;
  int * arr = getArr(n);

  int i;



  //Sorting start
  // 1,4,9,2,3
  for (int i = 1; i < n; i++) {
    int currernt = arr[i];
    int j = i - 1;

    while (arr[j] > currernt && j >= 0) {
      arr[j + 1] = arr[j];
      j--;
    }

    arr[j + 1] = currernt;
  }

  for (int i = 0; i < n; i++) {
    cout << " " << arr[i] << " ";
  }

  return 0;
}

