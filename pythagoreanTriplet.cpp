#include<iostream>
#include<cmath>
using namespace std;

bool checkTrio(int x,int y,int z){
    int lhs=pow(x,2)+pow(y,2);
    if(lhs==pow(z,2))  return true;
    else return false;
}

int maX(int arr[3]){
int x=arr[0],y=arr[1],z=arr[2];
if(x>y){
if(x>z) return 0;
else return 2;
   }else if(y>z){
    return 1;
   } else return 2;
    return 0;
}
int main(){
 int trios[3],lhs=0,indOfBig;

 cout<<"Enter any number of trio"<<endl;
 cin>>trios[0];
 cout<<"Enter any number of rest 2"<<endl;
 cin>>trios[1];
 cout<<"Enter last number of trio"<<endl;
 cin>>trios[2];

indOfBig=maX(trios);

int looped=0;
for(int i=0;i<3;i++){
    if(i==indOfBig) continue;
  looped+=1;
    cout<<trios[i]<<"^2";
      looped==1&&cout<<" + ";
    lhs+=pow(trios[i],2);
}

int scrOfBig=pow(trios[indOfBig],2);
if(lhs==scrOfBig){
cout<<" = "<<scrOfBig<<endl;
cout<<"Yes , they are pythagorean trio"<<endl;
} 
else{
    cout<<" ≠ "<<scrOfBig<<endl;;
    cout<<"No , they are pythagorean trio"<<endl;
}

return 0;
}