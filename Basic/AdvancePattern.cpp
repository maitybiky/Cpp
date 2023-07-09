#include <iostream>

using namespace std;

void q1(int row) {
  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= row + 1 - i; j++) {
      cout << ' ' << j << ' ';
    }
    cout << endl;
  }
}

void q2(int row) {
  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= i; j++) {
      if ((i + j) % 2 == 0) {
        cout << " 1 ";
      } else {
        cout << " 0 ";
      }
    }
    cout << endl;
  }
}

void q3(int row) {
  for (int i = 1; i <= row; i++) {
    for (int j = 1; j < (row * 2) + 1 - i; j++) {
      if (j < row + 1 - i) {
        cout << "  ";
      } else {
        cout << " *";
      }
    }
    cout << endl;
  }
}

void q4(int row) {
  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= row; j++) {
      if (j <= row - i) {
        cout << " ";
      } else {
        cout << ' ' << j - (row - i);
      }
    }
    cout << endl;
  }
}

void q5(int row) {
  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= row + (i - 1); j++) {
      if (j <= row - i) {
        cout << ' ' << ' ';
      } else if (j <= row) {
        cout << ' ' << row + 1 - j;
      } else {
        cout << ' ' << (j - row) + 1;
      }
    }
    cout << endl;
  }
}

void q6(int row) {
  int r = row * 2;
  int widthOfRow;

  for (int i = 1; i <= r; i++) {
    if (i <= row) {
      widthOfRow = row + i;
    } else {
      widthOfRow = (r + 1) - (i - row);
    }

    for (int j = 1; j <= widthOfRow; j++) {
      if (i <= row) {
        if (j <= row - (i - 1)) {
          cout << "  ";
        } else {
          cout << " *";
        }
      } else {

        if (j <= (i - row)) {
          cout << "  ";
        } else {
          cout << " *";
        }

      }

    }
    cout << endl;
  }
}

void q7(int row) {
  cout << "You actually entered column lenght\n";
  for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= row; j++) {
      int m = i + j;
      if (m % 4 == 0) {
        cout << " * ";
      } else if (i % 2 == 0 && j % 4 == 0) {
        cout << " * ";
      } else {
        cout << "   ";
      }
    }
    cout << endl;
  }
}
int main() {

  int row;
  cout << "Enter row height" << endl;
  cin >> row;

  q1(row);
  cout << "---------------------" << endl;
  q2(row);
  cout << "---------------------" << endl;
  q3(row);
  cout << "---------------------" << endl;
  q4(row);
  cout << "---------------------" << endl;
  q5(row);
  cout << "---------------------" << endl;
  q6(row);
  cout << "---------------------" << endl;
  q7(row);
  cout << "---------------------" << endl;
  return 0;
}

//                  Q1
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
//                  Q2
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1
//                  Q3
//     * * * * *
//    * * * * *
//   * * * * *
//  * * * * *
// * * * * *
//                  Q4
//       1
//      1 2
//     1 2 3
//    1 2 3 4
//   1 2 3 4 5    
//                  Q5 palindromic
//          1 
//        2 1 2
//      3 2 1 2 3 
//    4 3 2 1 2 3 4
//  5 4 3 2 1 2 3 4 5

//                  Q6
  //          *
  //        * * *
  //      * * * * *
  //    * * * * * * *
  //  * * * * * * * * *
  //  * * * * * * * * *
  //    * * * * * * *
  //      * * * * *
  //        * * *
  //          *
//                Q7
//        *           *       
//     *     *     *     *    
//  *           *           * 
