#include<iostream>

#include<conio.h>

using namespace std;

bool cheackP(int num) {
  bool isPrime = true;
  for (int i = 2; i < num; i++) {
    if (num % i == 0) {
      isPrime = false;
      break;
    }
  }
  return isPrime;
}
void allPrime() {
  cout << "Enter range" << endl;
  int range;
  cin >> range;
  clrscr();
  cout << "All Prime Number Upto" << range << endl;
  for (int i = 1; i <= range; i++) {
    if (cheackP(i)) cout << i << " ";
  }
}
void cheackPrime(int num) {

  bool isPrime = true;
  cin >> num;
  for (int i = 2; i < num; i++) {
    if (num % i == 0) {
      isPrime = false;
      break;
    }
  }
  if (isPrime) {
    cout << num << " is prime" << endl;

  } else {
    cout << num << " is not prime" << endl;

  }

  cout << "Press 0 to cheack again " << endl << " Press 1  to show all prime number" << endl;
  bool opt;
  cin >> opt;
  if (opt) {
    clrscr();
    allPrime();
  } else {
    cout << "Enter Number to cheack prime or not" << endl;
    int num;
    cheackPrime(num);
  }
}
int main() {
  cout << "Enter Number to cheack prime or not" << endl;
  int num;
  cheackPrime(num);
  return 0;
}