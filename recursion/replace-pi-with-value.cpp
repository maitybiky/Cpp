#include <iostream>

#include <string>

using namespace std;

string replacePI(char str[]) {
  string PIv = "3.14";
  if (str[0] == '\0') return "";
  if (str[0] == 'p' && str[1] == 'i') {
  
    return PIv+replacePI(str + 2);
  } else {
   
    return str[0]+replacePI(str + 1);
  }

}
int main() {
  char PIstring[] = "pippxxppixipi";
cout<<replacePI(PIstring)<<endl;
  
  return 0;

}