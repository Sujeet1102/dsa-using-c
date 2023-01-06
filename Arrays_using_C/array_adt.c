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

void Append(struct Array* arr, int x){
    arr->A[arr->length] = x;
    arr->length++;
}

void Insert(struct Array* arr, int index, int x){
    if(index > arr->length){
        printf("Index out of bound");
        return;
    }
    for(int i=arr->length; i>index; i--){
        arr->A[i] = arr->A[i-1];
    }
    arr->A[index] = x;
    arr->length++;
}

void Delete(struct Array* arr, int index){
    if(index > arr->length){
        printf("Index out of bound");
        return;
    }
    for(int i=index; i<arr->length-1; i++){
        arr->A[i] = arr->A[i+1];
    }
    arr->A[arr->length] = 0;
    arr->length--;
}

void lin_search(struct Array* arr,int key){
    for(int i=0; i<arr->length; i++){
        if(arr->A[i] == key){
            printf("Found key at index %d\n", i);
            return;
        }
    }
    printf("Key Not Found\n");
}

int main(){
    
    struct Array array;
    array.size = 20;
    array.A = (int*)malloc(sizeof(int)*array.size);
    array.length = 5;
    for (int i = 0; i < array.length; i++)
    {
        array.A[i] = i;
    }
    for (int i = array.length; i < array.size; i++)
    {
        array.A[i] = 0;
    }
    Append(&array,7);
    Insert(&array,0,9);
    Delete(&array,1);
    lin_search(&array,9);
    DisplayArray(array);

    return 0;
}