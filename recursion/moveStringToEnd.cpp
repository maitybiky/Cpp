#include <iostream>
#include<string>
using namespace std;

string moveToEnd(string str,int n=1){
 int ind=str.length()-n; //ind 
if(ind==0) return str;
if(str[ind]=='x') {
    string rem=str.erase(ind,1);
    string pushedX=rem+"x";
    return  moveToEnd(pushedX,n+1);
}
return moveToEnd(str,n+1);
}

int main(){
    string p="axxbxxxffdfx";
   
    cout<<moveToEnd(p);
return 0;
}