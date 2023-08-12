#include <iostream>

using namespace std;

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;
}


int main() {
  int num = 10;
  int * ptr = & num;

  cout << & num << endl; // adress hexadecimal
  cout << ptr << endl; // adress  hexadecimal
  cout << * ptr << endl; // valure of num

  ptr++;
  cout << ptr << endl; // next memory adress  hexadecimal
  cout << * ptr << endl; // garbage value

  // Pointers and Arrays

  int arr[] = {
    3,
    4,
    6
  };
  cout << "*array" << * arr << endl; // arr is a constant pointer to the first element of the array
  int * arrPtr = arr; // arrPtr is a pointer to the first element of the array
  for (int i = 0; i < 3; i++) {
    cout << * arrPtr << endl;
    arrPtr++;
  }


 

// pointer as argument

int a=3;
int b=5;
swap(&a,&b); // change original value
cout<<"a "<<a<<" b "<<b<<endl;
swap(a,b);   // function overloading : does not change original value
cout<<"a "<<a<<" b "<<b<<endl;
  return 0;
}
