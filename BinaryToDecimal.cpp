#include<iostream>

#include<cmath>

using namespace std;

int main() {
    int binary, decimal = 0;

    cout << "Enter binary number" << endl;
    cin >> binary;
    for (int i = 0; binary > 0; i++) {
      decimal += (binary % 2) * pow(2, i);
      binary /= 10;
    }
    cout << decimal;
    return 0;
}