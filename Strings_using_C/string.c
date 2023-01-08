#include <stdio.h>
#include <stdlib.h>

int length(char *s){
    int i=0;
    for(i=0; s[i]!='\0';i++);
    return i;
}

void reverse(char *s){
    char b[8];
    int i,j;
    for(i=0; s[i]!='\0';i++);
    i=i-1;
    for(j=0;i>=0;i--,j++){
        b[j]=s[i];
    }
    b[j]='\0';
    printf("\n%s",b);
}

void reverse_(char *s){
    int i,j;
    for(j=0; s[j]!='\0';j++);
    j=j-1;
    for(i=0; i<j;i++,j--){
        int temp = s[i];
        s[i]=s[j];
        s[j]=temp;
    }
}

int main(){
    char s[] = "Welcome";
    printf("%d",length(s));
    // reverse(s);
    reverse_(s);
    printf("\n%s",s);
    reverse(s);
    return 0;
}