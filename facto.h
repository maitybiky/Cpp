#ifndef FUNCTIONS_H
#define FUNCTIONS_H

int facto(int num){
    int result=1;
    for(int i=num;i>1;i--){
       result*=i;
    }
    return result;
}

int nCr(int n,int r){
    return facto(n)/(facto(n-r)*facto(r));
}
#endif