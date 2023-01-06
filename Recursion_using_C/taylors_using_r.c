#include <stdio.h>
#include <stdlib.h>

double taylors(int x,int n){ //recursion
    static double p=1,f=1;
    double r;
    if(n==0) return 1;
    else{
        r=taylors(x, n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }

}
double e(double x, double n) { //horners rule - iterative method
    double s=0;
    for(n; n>0; n--){
        s = 1 + (x/n)*s;
    }
    return s;
}

double e_horners(double x, double n) { //horners rule - recursion
    static double s=0;
    if(n==0) return s;
    else{
        s = 1 + (x/n)*s;
        return e_horners(x, n-1);
    }
}

int main(){
    printf("%lf\n",taylors(1,10));
    printf("%lf\n",e(1,10));
    printf("%lf\n",e_horners(1,10));
    return 0;
}