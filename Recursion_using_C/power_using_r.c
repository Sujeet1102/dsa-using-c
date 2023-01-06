#include <stdio.h>
#include <stdlib.h>

int Pow(int n,int m){ //n raised to m
    if(m==0){
        return 1;
    }
    else return Pow(n,m-1)*n;
}

int power(int n, int m){ //n raised to m
    if(m==0){
        return 1;
    }
    if(m%2==0){
        return power(n*n,m/2);
    }
    else return n*power(n*n,(m-1)/2);
}

int main(){
    printf("%d\n",Pow(3,2));
    printf("%d\n",power(3,2));
    return 0;
}