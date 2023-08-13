#include<iostream>
#include <string>
using namespace std;

void subset (string str,string rnode=""){
 if(str.length()==0) {
 cout<<rnode<<endl;
return ;
    } 
    
  subset(str.substr(1),rnode+str[0]);
  subset(str.substr(1),rnode);
  
}                                  

int main(){

subset("ABC");
return 0;
}