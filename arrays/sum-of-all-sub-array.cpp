#include<iostream>
using namespace std;
int partialAdder(int arr[],int sI,int eI){
    int length=(eI-sI)+1;
    int sum=0;

    for (int i=sI;i<length;i++){
       sum+=arr[i];
    }
    
    return sum;
}
int main(){
int n, currentSum,totalSum=0;
cout<<"Enter length of array"<<endl;
cin>>n;

int arr[n];

for (int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<partialAdder(arr,0,2);
for(int i=0;i<n;i++){
    currentSum=0;
    for(int j=i;j<n;j++){
      currentSum+=arr[j];
      cout<<currentSum<<endl;
    }
    totalSum+=currentSum;
}

cout<<"Sum is "<<totalSum<<endl;
return 0;

}



