#include <iostream>

#include <string>

using namespace std;

void combo(string x, string y) {

    if(x.length()==0) return;

     char fchar= x[0];
     for(int i=0;i<y.length();i++){
        cout<<fchar<<y[i]<<endl;
     } 
     combo(x.substr(1),y);


}

int main() {
string keys []={"./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
int fnum;
int lnum;
cin>>fnum;
cin>>lnum;
  combo(keys[fnum-1],keys[lnum-1]);
  return 0;
}