#include <iostream>

using namespace std;

void halfPyramid(int row) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < row - i; j++) {
      cout << '*';
    }
    cout << endl;
  }
}

void halfPyramidMirror(int row) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < row; j++) {
      if (j < row - (i + 1)) {
        cout << ' ';
      } else {
        cout << '*';
      }
    }
    cout << endl;
  }
}

void fullPyramid(int row) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < row; j++) {
      if (j < row - (i + 1)) {
        cout << ' ';
      } else {
        cout << '*';
      }
    }
    for (int k = 0; k < i; k++) {
      cout << '*';
    }
    cout << endl;
  }
}

void fullPyramidUpSideDown(int row) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < row; j++) {
      if (j < i) {
        cout << ' ';
      } else {
        cout << '*';
      }
    }
    for (int k = 0; k < row - (i + 1); k++) {
      cout << '*';
    }
    cout << endl;
  }
}

void halfPyramidWithNum(int row) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << ' ' << i + 1 << ' ';
    }
    cout << endl;
  }
}

void floidTri(int row) {
  int counter = 0;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < i + 1; j++) {
      counter++;
      if (counter < 10) {
        cout << 0 << counter << ' ';
      } else {
        cout << counter << ' ';
      }

    }
    cout << endl;
  }
}

void butterfly(int row) {
  int r = row * 2;
  for (int i = 1; i <= r; i++) {
    for (int j = 1; j <= r; j++) {
      if (i <= row) {
        if (j <= i || j >= r - (i - 1)) {
          cout << ' ' << '*' << ' ';
        } else {
          cout << ' ' << ' ' << ' ';
        }
      } else {
        if (j >= i || j <= r - (i - 1)) {
          cout << ' ' << '*' << ' ';
        } else {
          cout << ' ' << ' ' << ' ';
        }
      }
    }
    cout << endl;
  }
}
int main() {
  int row;
  cout << "Enter row height" << endl;
  cin >> row;
  // select pattern type

  halfPyramid(row);
  cout << "---------------------" << endl;
  halfPyramidMirror(row);
  cout << "---------------------" << endl;
  fullPyramid(row);
  cout << "---------------------" << endl;
  fullPyramidUpSideDown(row);
  cout << "---------------------" << endl;
  halfPyramidWithNum(row);
  cout << "---------------------" << endl;
  floidTri(row);
  cout << "---------------------" << endl;
  butterfly(row);
  cout << "---------------------" << endl;
}

// Q1
// *****
// ****
// ***
// **
// *
// Q2
//     *
//    **
//   ***
//  ****
// *****
// Q3
//     *
//    ***
//   *****
//  *******
// *********
// Q4
// *********
//  *******
//   *****
//    ***
//     *
// Q5
// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// Q5 Floyd's triangle
//  1 
//  2   3 
//  4   5  6
//  7   8   9   10
//  11  12  13  14   15
// Q6 Butterfly