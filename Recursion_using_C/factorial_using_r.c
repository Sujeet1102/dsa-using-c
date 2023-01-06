#include <stdio.h>
#include <stdlib.h>

int Fact(int n){
    if(n==0){
        return 1;
    }
    else return Fact(n-1)*n;
}

int main(){
    printf("%d",Fact(4));
    return 0;
}