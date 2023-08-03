#include<iostream>

#include<conio.h>

#include"superscript.h"

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

void displayArr(int arr[]) {
  for (int i = 0; arr[i] != '\0'; i++) {
    cout << arr[i] << endl;
  }
}

int main() {
  int n;
  cout << "Enter length how many number to work with;" << endl;
  cin >> n;
  int * arr = getArr(n);
  displayArr(arr);
  // sorting start

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - (i + 1); j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  // output of sorted array
  cout << "Here is your sorted array" << endl;
  cout << "[ ";
  for (int i = 0; i < n; i++) {
    cout << arr[i];
    if (i < n - 1) cout << " , ";
  }
  cout << "]" << endl;
}