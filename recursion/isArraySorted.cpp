#include <iostream>
using namespace std;

bool isSorted(int arr[],int lnt){
    
    if(lnt==1) return true;
   if (arr[0]>arr[1]) return false;
   return isSorted(arr+1,lnt-1);
     
}

int main(){
 

    int arr[5]={1,3,2};

 cout<<isSorted(arr,3);
    return 0;
}