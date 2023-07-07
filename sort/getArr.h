#include<iostream>
#include<conio.h>
using namespace std;



int getarray() {
  int n;

  cout << "Enter length how many number to work with;"<< endl;

  cin >> n;
    int numbers[n];
  cout << "ok, now enter all " << n << " number one by one" << endl;

  for (int i = 0; i < n; i++) {
    for (int j = 1; j < i + 1; j++) {
      cout<< "[" << numbers[j - 1] << "]"<<getSuperscriptForm(j-1)<<" ";
    }
    cout<< "[..";
    cin >> numbers[i];

    if (i < (n - 1)) clrscr();

  }
clrscr();
  cout<<"Here is your numbers"<<endl;
  cout<<"[ ";
  for(int i=0;i<n;i++){
    cout<<numbers[i];
    if(i<n-1) cout<<" , ";
  }
   cout<<"]";
  return 0;
}