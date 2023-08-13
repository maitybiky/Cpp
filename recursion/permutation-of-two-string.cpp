#include <iostream>

#include <string>

using namespace std;

void permutation(string str, string fixed = "") {
  if (str.length() == 1) {
    cout << str[0] << fixed << endl;
    return;
  }
  for (int i = 0; i < str.length(); i++) {
    char neextFixed = str[i];
    string nextStr = str.substr(0, i) + str.substr(i + 1);
    permutation(nextStr, fixed + neextFixed);
  }
}

int main() {
  permutation("ABC");

  return 0;
}