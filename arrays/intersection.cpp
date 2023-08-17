#include <iostream>

#include <limits>

using namespace std;

void intersecOrdinary(int arr1[], int arr2[]) {
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 4; j++) {
      if (arr1[i] == arr2[j]) {
        cout << arr1[i] << " ";
        arr2[j] = -1;
        break;
      }
      if (arr1[i] < arr2[j]) break;
    }
  }
}

void intersecOPtmised(int arr1[], int arr2[]) {
  int i = 0, j = 0;

  while (i < 6 && j < 4) {
    if (arr1[i] == arr2[j]) {
      cout << arr1[i] << " ";
      i++;
      j++;
    } else if (arr1[i] < arr2[j]) {
      i++;
    } else {
      j++;
    }
  }
}

int main() {
  // arrays are in non decreasing oreder

  int arr1[] = {
    1,
    2,
    2,
    2,
    3,
    4
  };
  int arr2[] = {
    2,
    2,
    3,
    3
  };

  intersecOPtmised(arr1, arr2);

  return 0;
}