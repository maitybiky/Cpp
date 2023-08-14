#include <iostream>
using namespace std;

int findPath(int start , int end){

    if (start==end) return 1;
    return 0+
    findPath(start+1,end);

}

int main(){
cout << findPath(0,4);
    return 0;
}