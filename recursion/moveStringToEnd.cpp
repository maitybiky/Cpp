#include <iostream>

#include<string>

using namespace std;


//my code 
string moveToEnd(string str, int n = 1) {
  int ind = str.length() - n; //navgating from end of the string 

  if (ind == 0) return str;
  if (str[ind] == 'x') {
    string rem = str.erase(ind, 1);
    string pushedX = rem + "x";
    return moveToEnd(pushedX, n + 1);
  }
  return moveToEnd(str, n + 1);
}

// youtube

string MoveToEnd(string str){
    if(str.length()==0) return "";
    
     char firstChar=str[0];
    
    if(firstChar=='x'){
        return MoveToEnd(str.substr(1)) + firstChar;
    }
    return firstChar+MoveToEnd(str.substr(1)); 
}
int main() {
  string p = "axxbxxxffdfx";

//   cout << moveToEnd(p);
  cout << MoveToEnd(p);
  return 0;
}