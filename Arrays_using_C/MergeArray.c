#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};

void DisplayArray(struct Array arr){
    printf("\nArray elements are:\n");
    for(int i=0; i<arr.length; i++){
        printf("%d ",arr.A[i]);
    }
}

struct Array* Merge(struct Array* A1,struct Array* A2,struct Array* A3){
    int i=0,j=0,k=0;
    for(; i<A1->length || j<A2->length;){
        if(A1->A[i]<A2->A[j]){
            A3->A[k] = A1->A[i];
            k++;
            i++;
        }
        else{
            A3->A[k] = A2->A[j];
            k++;
            j++;
        }
    }
    for(;i<A1->length;i++){
        A3->A[k] = A1->A[i];
        k++;
    }
    for(;j<A2->length;j++){
        A3->A[k] = A2->A[j];
        k++;
    }
    return A3;  
}

int main(){
    
    struct Array arr1;
    arr1.size = 5;
    arr1.A = (int*)malloc(sizeof(int)*arr1.size);
    arr1.length = 5;
    for (int i = 0; i < arr1.length; i++)
    {
        arr1.A[i] = i+1;
    }
    struct Array arr2;
    arr2.size = 5;
    arr2.A = (int*)malloc(sizeof(int)*arr2.size);
    arr2.length = 5;
    for (int i = 0; i < arr2.length; i++)
    {
        arr2.A[i] = i+6;
    }
    struct Array arr3;
    arr3.size = arr1.size+arr2.size;
    arr3.A = (int*)malloc(sizeof(int)*arr3.size);
    arr3.length = arr1.length+arr2.length;
    DisplayArray(arr1);
    DisplayArray(arr2);
    DisplayArray(*Merge(&arr1, &arr2,&arr3));

    return 0;
}