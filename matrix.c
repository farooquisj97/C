#include<stdio.h>

int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;

    printf("Enter matrix A\n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter matrix B\n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Matrix A is: \n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B is: \n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<3; i++){
        for (j=0; j<3; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Addition of matrix A and B is: \n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
