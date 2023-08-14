#include <iostream>
using namespace std;

void TowerOfH(int s,int e,char src, char aux,char des){
    if(e<s) return;
    TowerOfH(s,e-1,src,des,aux);
cout<<"move "<<e<<" From "<<src<<" to "<<des<<endl;
TowerOfH(s,e-1,aux,src,des);
}

int main(){
TowerOfH(1,3,'A','B','C');
    return 0;
}