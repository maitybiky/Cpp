#include <iostream>
using namespace std;

int main(){
    int num =10;
    int *ptr=&num;

    cout<<&num<<endl; // adress hexadecimal
    cout<<ptr<<endl;  // adress  hexadecimal
    cout<<*ptr<<endl; // valure of num
    return 0;
}