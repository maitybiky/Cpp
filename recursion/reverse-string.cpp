#include <iostream>
#include <string>
using namespace std;

string rev(string& str,int ind=0){

    if(!str[ind]) return "";

     return  rev(str,ind+1)+str[ind];
}

int main(){
    
    string s="hospital";
    cout<<rev(s);
    return 0;
}