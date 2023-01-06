#include <stdio.h>
#include <stdlib.h>

int fib(int n){ //recursive method
    if(n==0) return 0;
    if(n==1) return 1;
    else{
        return fib(n-2)+fib(n-1);
    }
}

int fib_(int n){ //iterative method
    int t0=0,t1=1;
    int s=0;
    if(n==0) return 0;
    if(n==1) return 1;
    for(int i=2; i<=n; i++){
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
}
int F[10];

int mfib(int n){ //memoization method
    if(n<=1) {
        F[n] = n;
        return n;
    }
    else{
        if(F[n-2]==-1){
            F[n-2] = mfib(n-2);
        }
        if(F[n-1]==-1){
            F[n-1] = mfib(n-1);
        }
        F[n] = F[n-2]+F[n-1];
        return F[n-2]+F[n-1];
    }
}

int main(){
    int z = 6;
    for(int i=0; i<10; i++) F[i]=-1;
    printf("%d\n",fib(z));
    printf("%d\n",fib_(z));
    printf("%d\n",mfib(z));
    return 0;
}