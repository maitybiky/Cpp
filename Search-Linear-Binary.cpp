#include<iostream>
using namespace std;

void Linear(){
       int arr[]={3,4,23,45,2,64,24,21,43,566,233};
     cout<<"Enter What to Search "<<endl;
     int num,ind=-1;
     cin>>num;

     for (int i=0;i<11;i++){
        if(arr[i]==num){
            ind=i;
            break;
        } 
     }
     cout<<ind;
}




int binarySearch(int arr[],int lnt,int target){
    
int start=0;
int end=lnt;

while(start<=end){
    int mid=(start+end)/2;
  
    if(arr[mid]==target){
   return mid;
    }else if(arr[mid]>target){
        end=mid-1;
       
    }else {
        start=mid+1;
    }
}

return -1;
}

int main(){
 
 int arr[]={11,21,31,41,51,61,71,81,91};
 int target;
 cin>>target;
 
cout<<binarySearch(arr,9,target);
return 0;
}