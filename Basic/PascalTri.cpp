#include<iostream>
#include "facto.h"

int main(){
    int row;
    std::cout<<"Enter row"<<std::endl;
    std::cin>>row;

    for(int i=0;i<row;i++){
        for(int j=0;j<i+1;j++){
            std::cout<<" "<<nCr(i,j);
        }
        std::cout<<std::endl;
    }
    return 0;
}