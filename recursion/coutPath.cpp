#include <iostream>
using namespace std;
int countWaysToReachTop(int s,int e) {
    // Base cases
    if (s==e ) {
        return 1;
    } 
     if (s>e) {
        return 0;
    }

    // Recursive cases
    int ways = 0;
    for (int i = 1; i <= 6; i++) {
     
        ways += countWaysToReachTop(s+i,e);
      
    }

    return ways;
}

int main() {
    int n;
    cout << "Enter the number of steps: ";
   cin >> n;

    int ways = countWaysToReachTop(0,n);
    cout << "Number of ways to reach the top: " << ways << endl;

    return 0;
}
