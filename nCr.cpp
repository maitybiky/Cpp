#include<iostream>
using namespace std;

int facto(int num){
    int result=1;
    for(int i=num;i>1;i--){
       result*=i;
    }
    return result;
}
int main(){
     int n,c;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<"Enter c"<<endl;
    cin>>c;
    cout<<facto(n)/(facto(n-c)*facto(c))<<endl;
return 0;
}