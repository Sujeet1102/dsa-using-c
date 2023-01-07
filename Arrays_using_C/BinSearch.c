#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};

void DisplayArray(struct Array arr){
    printf("Array elements are:\n");
    for(int i=0; i<arr.length; i++){
        printf("%d ",arr.A[i]);
    }
}

int BinSearch(struct Array* arr,int l, int h, int key){
    while(l<=h){
        int mid = (l+h)/2;
        if(key==arr->A[mid]){
            return mid;
        }
        else if(key<arr->A[mid]){
            h = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return -1;
}

int BinSearch_R(struct Array* arr,int l, int h, int key){
    int mid;
    if(l<=h){
        int mid = (l+h)/2;
        if(key==arr->A[mid]){
            return mid;
        }
        else if(key<arr->A[mid]){
            return BinSearch_R(arr,l,mid-1,key);
        }
        else{
            return BinSearch_R(arr,mid+1,h,key);
        }
    }
    return -1;
}

void CheckSorted(struct Array* arr){
    for(int i=0; i<arr->length-1; i++){
        if(arr->A[i] > arr->A[i+1]) {
            printf("\nNot Sorted\n");
            return;
        }
    }
    printf("\nSorted\n");
}

int main(){
    
    struct Array arr;
    arr.size = 5;
    arr.A = (int*)malloc(sizeof(int)*arr.size);
    arr.length = 5;
    for (int i = 0; i < arr.length; i++)
    {
        arr.A[i] = i+1;
    }
    DisplayArray(arr);
    printf("\nIndex: %d",BinSearch(&arr,0,4,1));
    printf("\nIndex_R: %d",BinSearch(&arr,0,4,4));
    CheckSorted(&arr);
    
    return 0;
}