#include<iostream>

int main(){
    std::cout<<"Enter last Natural number"<<std::endl;
    int n,sum=0;
    std::cin>>n;
    for(int i=1;i<=n;i++){
        sum += i;
    }

    std::cout<<"Sum of natural number upto "<<n<<" is "<<sum<<std::endl;
    return 0;
}