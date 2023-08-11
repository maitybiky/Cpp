#include <iostream>

#include <string>

using namespace std;

string replacePI(char str[]) {
  string PIv = "3.14";
  if (str[0] == '\0') return "";
  if (str[0] == 'p' && str[1] == 'i') {
    cout << PIv;
    return replacePI(str + 2);
  } else {
    cout << str[0];
    return replacePI(str + 1);
  }

}

int main() {
  char PIstring[] = "pippxxppixipi";

  replacePI(PIstring);
  return 0;

}