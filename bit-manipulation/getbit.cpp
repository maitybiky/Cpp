#include<iostream>

#include<string>

using namespace std;

int decimalToBinary(int d) {
  string binary = "";
  int i = 0;
  while (d > 0) {
    int rest = d % 2;
    binary.insert(i, to_string(rest));
    d = d / 2;
    i++;
  }

  //reverse binary
  string rev = "";
  for (int i = binary.length() - 1; i >= 0; i--) {
    rev += binary[i];
  }

  return stoi(rev);
}

int getBit(int num,int position){
   return 0;
}
int main() {
  cout << "Enter any number " << endl;
  int num,p;
  cin >> num;
  cout << "Enter position of bit (position....3210)" << endl;
  cin >> p;
  cout << decimalToBinary(num) << endl;
  int binary=decimalToBinary(num);
  cout<<((binary&(1<<p))!=0)<<" <<<<";

  return 0;
}