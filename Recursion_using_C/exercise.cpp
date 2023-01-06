#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

int fun (int n)

       { 

int x=1, k; 

if (n==1) return x; 

for (k=1; k<n; ++k) 
    x=x + fun (k) * fun (n-k); 

return x; 

        }

int main(){
    cout<<fun(5);
    // int p=5;
    // cout<<f(p,p);
    // for(int i=0;i<5;++i){
    //     cout<<i;
    // }
    return 0;
}