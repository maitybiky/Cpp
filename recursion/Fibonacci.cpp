#include <iostream>
using namespace std;

int range;
//* Print fibbo up to n
int fibbo(int prev,int curr){
    if(curr>=range)  return 0;
     cout<<" "<<curr;
     fibbo(curr,prev+curr);
     return 0;
}
  
//* Find nth fibbo
//! amature
int findfibbo(int prev,int curr,int n){
    if (n==0|n==1) return curr;

    return findfibbo(curr,prev+curr,n-1);
}

//* Optimised
int fibboPlus(int n){
    if (n==0|n==1) return n;
    return fibboPlus(n-1) + fibboPlus(n-2);
}


int main(){
cin>>range;
fibbo(0,1);

cout<<"which term to find"<<endl;
int n;
cin>>n;
cout<<findfibbo(0,1,n)<<"!"<<endl;
cout<<fibboPlus(n)<<"!++";
return 0;
}