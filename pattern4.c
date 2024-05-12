#include<stdio.h>

void main() {

    char i,j;
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);

    for (i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            printf("%c ",j+64);
        }
        printf("\n");
    }
}