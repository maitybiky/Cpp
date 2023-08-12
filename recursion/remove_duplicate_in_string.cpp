#include<iostream>
#include <string>
using namespace std;

string remDuplicate(string str,int n=0){

if(str.length()==n) return str;
    if(str[n+1]==str[n]) return remDuplicate(str.erase(n,1),n);
    return remDuplicate(str,n+1);
}

int main(){
string p="ggurrrriiiizsss";
cout<<remDuplicate(p)<<endl;

return 0;

}
