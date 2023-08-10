#include <iostream>
using namespace std;
//* All element must be between 1 to N-1 (N is length of the array)

int main(){
    cout<<"Enter length of array"<<endl;
    int n;
    cin>>n;
    int arr[n]; //main array

    cout<<"Enter all "<<n<<" element of the array one by one"<<endl;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

//finding unique element
  int res = 0;

  for (int i = 0; i < n; i++) {
    res = res ^ arr[i];
  }
cout<<res<<"dd";
  for (int i = 1; i < n; i++) {
    res = res ^i;
  }

cout<<"Duplicate element is "<<res;
    return 0;
}




