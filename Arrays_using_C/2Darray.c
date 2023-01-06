#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int A[3][4] = {{1,2,3,4},{2,4,6,8},{1,3,5,7}};

    int *B[3];
    B[0] = (int*)malloc(sizeof(int)*4);
    B[1] = (int*)malloc(sizeof(int)*4);
    B[2] = (int*)malloc(sizeof(int)*4);
    B[0][3] = 4;

    int **C;
    C = (int**)malloc(sizeof(int*)*3);
    C[0] = (int*)malloc(sizeof(int)*4);
    C[1] = (int*)malloc(sizeof(int)*4);
    C[2] = (int*)malloc(sizeof(int)*4);
    C[0][3] = 4;

    for(int i=0;i<3;i++)
        {
        for(int j=0;j<4;j++)
        printf("%d ",A[i][j]);
        printf("\n");
        }
    printf("------------\n");
    for(int i=0;i<3;i++)
        {
        for(int j=0;j<4;j++)
        printf("%d ",B[i][j]);
        printf("\n");
        }
    printf("------------\n");
    for(int i=0;i<3;i++)
        {
        for(int j=0;j<4;j++)
        printf("%d ",C[i][j]);
        printf("\n");
        }
    printf("------------\n");
    return 0;
}