#include<iostream>
#include "facto.h"
using namespace std;


int main(){
     int n,c;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<"Enter c"<<endl;
    cin>>c;
    cout<<facto(n)/(facto(n-c)*facto(c))<<endl;
return 0;
}