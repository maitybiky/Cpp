#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

int main(){
    cout<<'a'-'A'<<endl;
    string str ="surajit";
    for(int i=0;i<str.length();i++){
        str[i]-=32;
    }
    cout<<str<<endl;


    // inbuild function
     string str1="sldjd";
     transform(str1.begin(),str1.end(),str1.begin(),::toupper);
     cout << str1<< endl;
    return 0;
}